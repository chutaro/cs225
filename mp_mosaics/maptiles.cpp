/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
#include "point.h"
#include "kdtree.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */

    int row = theSource.getRows();
    int column = theSource.getColumns();
    MosaicCanvas *canvas = new MosaicCanvas(row, column);

    map<Point<3>, TileImage*> map;
    vector<Point<3>> points;
    for (TileImage tile : theTiles) {
      Point<3> point = convertToXYZ(tile.getAverageColor());
      std::cout << __LINE__ << std::endl;
      points.push_back(point);
      map[point] = &tile;
    }

    KDTree<3> tree(points);

    for (int i = 0; i < row; i++) {
      for (int j = 0; i < column; j++) {
        Point<3> regionColor = convertToXYZ(theSource.getRegionColor(i, j));
        Point<3> nearest = tree.findNearestNeighbor(regionColor);

        canvas->setTile(i, j, map[nearest]);
      }
    }

    return canvas;
}
