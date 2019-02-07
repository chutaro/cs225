/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#pragma once

#include "Image.h"

 class StickerSheet {
 public:
   StickerSheet(const Image &picture, unsigned max);
   ~StickerSheet();
   StickerSheet(const StickerSheet &other);
   StickerSheet const & operator=(const StickerSheet &other);
   void _copy(const StickerSheet &other);
   void _destroy();

   void changeMaxSticker(unsigned max);
   int addSticker(Image &sticker, unsigned x, unsigned y);
   bool translate(unsigned index, unsigned x, unsigned y);
   void removeSticker(unsigned index);
   Image* getSticker(unsigned index);
   Image render() const;

 private:
   Image base_; // the base image of this StickerSheet.
   Image *stickerData_; // array of stickers.
   unsigned *x_array; // array of stickers' x-positions
   unsigned *y_array; // array of stickers' y-positions
   unsigned max_; // the maximum number of stickers
   unsigned count_; //the number of stickers it has now
 };
