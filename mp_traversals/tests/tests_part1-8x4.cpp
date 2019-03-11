#include "../cs225/catch/catch.hpp"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "../cs225/PNG.h"
#include "../cs225/HSLAPixel.h"

#include "../imageTraversal/BFS.h"
#include "../imageTraversal/DFS.h"

using namespace cs225;


/**
 *     0 1 2 3 4 5 6 7
 *   -----------------
 *  0: X X X X X X X X
 *  1: X - - - - - - X    X: black
 *  2: X - * - - X - X    -: white
 *  3: X X X X X X X X    *: Starting point (white)
 *
 * The black/X (h=180, s=1, l=0) is as different from
 * white/- (h=0, s=0, l=1) as possible.
**/

PNG getTestPNG_8x4() {
  PNG png(8, 4);
  HSLAPixel blackPixel(180, 1, 0);

  for (unsigned i = 0; i < 8; i++) {
    png.getPixel(i, 0) = blackPixel;
    png.getPixel(i, 3) = blackPixel;
  }

  png.getPixel(0, 1) = blackPixel;
  png.getPixel(0, 2) = blackPixel;
  png.getPixel(7, 1) = blackPixel;
  png.getPixel(7, 2) = blackPixel;
  png.getPixel(5, 2) = blackPixel;

  return png;
}

// PNG getTestPNG_8x8() {
//   PNG png(8, 8);
//   HSLAPixel blackPixel(180, 1, 0);
//
//   for (unsigned i = 1; i < 7; i++) {
//     png.getPixel(1, i) = blackPixel;
//   }
//   for (unsigned i = 2; i < 5; i++) {
//     png.getPixel(3, i) = blackPixel;
//   }
//   png.getPixel(4, 2) = blackPixel;
//   png.getPixel(5, 2) = blackPixel;
//   png.getPixel(5, 6) = blackPixel;
//   png.getPixel(5, 7) = blackPixel;
//   png.getPixel(6, 6) = blackPixel;
//
//   return png;
// }
//
// TEST_CASE("DFS iterator visits all points in the correct order (8x8 image)", "[weight=1][part=1]") {
//   PNG png = getTestPNG_8x8();
//   Point startPoint(0, 0);
//
//   DFS t(png, startPoint, 0.2);
//   ImageTraversal::Iterator it = t.begin();
//   for (const Point & p : t) {
//     std::cout << p << std::endl;
//   }
// }

TEST_CASE("DFS iterator visits all points in the correct order (7x4 image)", "[weight=1][part=1]") {
  PNG png = getTestPNG_8x4();
  Point startPoint(2, 2);

  DFS t(png, startPoint, 0.2);
  ImageTraversal::Iterator it = t.begin();

  REQUIRE( *it == Point(2, 2) ); ++it;
  REQUIRE( *it == Point(2, 1) ); ++it;

  REQUIRE( *it == Point(1, 1) ); ++it;
  REQUIRE( *it == Point(1, 2) ); ++it;

  REQUIRE( *it == Point(3, 1) ); ++it;
  REQUIRE( *it == Point(3, 2) ); ++it;

  REQUIRE( *it == Point(4, 2) ); ++it;
  REQUIRE( *it == Point(4, 1) ); ++it;

  REQUIRE( *it == Point(5, 1) ); ++it;

  REQUIRE( *it == Point(6, 1) ); ++it;
  REQUIRE( *it == Point(6, 2) ); ++it;
}

TEST_CASE("BFS iterator visits all points in the correct order (7x4 image)", "[weight=1][part=1]") {
  PNG png = getTestPNG_8x4();
  Point startPoint(2, 2);

  BFS t(png, startPoint, 0.2);
  ImageTraversal::Iterator it = t.begin();

  REQUIRE( *it == Point(2, 2) ); ++it;

  REQUIRE( *it == Point(3, 2) ); ++it;
  REQUIRE( *it == Point(1, 2) ); ++it;
  REQUIRE( *it == Point(2, 1) ); ++it;

  REQUIRE( *it == Point(4, 2) ); ++it;
  REQUIRE( *it == Point(3, 1) ); ++it;

  REQUIRE( *it == Point(1, 1) ); ++it;

  REQUIRE( *it == Point(4, 1) ); ++it;
  REQUIRE( *it == Point(5, 1) ); ++it;
  REQUIRE( *it == Point(6, 1) ); ++it;
  REQUIRE( *it == Point(6, 2) ); ++it;
}
