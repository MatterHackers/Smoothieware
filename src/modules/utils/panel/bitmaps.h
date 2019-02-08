#pragma once

#include <stdint.h>

/*
#define ohw_logo_antipixel_width 80
#define ohw_logo_antipixel_height 15
static const uint8_t ohw_logo_antipixel_bits[] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x80, 0x0C, 0x00, 0x33, 0x18, 0xBB, 0xFF, 0xFF, 0xFF, 0xFD, 0x80, 0x5E,
    0x80, 0x2D, 0x6B, 0x9B, 0xFF, 0xFF, 0xFF, 0xFD, 0x80, 0xFF, 0xC0, 0x2D, 0x18, 0xAB, 0xFF, 0xFF,
    0xFF, 0xFD, 0x80, 0xFF, 0xC0, 0x2D, 0x7B, 0xB3, 0xFF, 0xFF, 0xFF, 0xFD, 0x80, 0x7F, 0x80, 0x33,
    0x78, 0xBB, 0xFF, 0xFF, 0xFF, 0xFD, 0x81, 0xF3, 0xE0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD,
    0x81, 0xF3, 0xE0, 0x3F, 0xFD, 0xB3, 0x18, 0xDD, 0x98, 0xC5, 0x81, 0xF3, 0xE0, 0x3F, 0xFD, 0xAD,
    0x6B, 0x5D, 0x6B, 0x5D, 0x80, 0x73, 0x80, 0x3F, 0xFC, 0x21, 0x1B, 0x55, 0x08, 0xC5, 0x80, 0xF3,
    0xC0, 0x3F, 0xFD, 0xAD, 0x5B, 0x49, 0x6A, 0xDD, 0x80, 0xE1, 0xC0, 0x3F, 0xFD, 0xAD, 0x68, 0xDD,
    0x6B, 0x45, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};
*/

/**
 * Boot Splash Logo
 * 
 * Made with Marlin Bitmap Converter
 * http://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'firmware-logo.png'
 */
#define boot_logo_width  104
#define boot_logo_height 32
static const uint8_t boot_logo_bits[] = {
  0x00,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .............######.....................................................................................
  0x00,0x3F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..........############..................................................................................
  0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........################................................................................................
  0x03,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ......####################..............................................................................
  0x07,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00, // .....######################...........................................####..............................
  0x0F,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00, // ....########################..........................................####..............................
  0x0F,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00, // ....#########################.........................................####..............................
  0x1F,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00, // ...###########################........................................####..............................
  0x3F,0xF8,0x07,0xFC,0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00, // ..###########........#########........................................####..............................
  0x3F,0xF0,0x03,0xFE,0x00,0x01,0x80,0x00,0x03,0xC0,0x70,0x01,0xC0, // ..##########..........#########................##.....................####.......###...........###......
  0x7F,0xF3,0xE1,0xFE,0x01,0xFF,0xE1,0xE1,0xF3,0xC3,0xFF,0x07,0xF8, // .###########..#####....########........############....####....#####..####....##########.....########...
  0x7F,0xE7,0xC9,0xFE,0x01,0xFF,0xF1,0xE1,0xF3,0xC7,0xFF,0x1F,0xFC, // .##########..#####..#..########........#############...####....#####..####...###########...###########..
  0x7F,0xE7,0xCC,0xFF,0x01,0xFF,0xF9,0xE1,0xF3,0xCF,0xFF,0x1F,0xFE, // .##########..#####..##..########.......##############..####....#####..####..############...############.
  0x7F,0xCF,0x9C,0xFF,0x01,0xF8,0xF9,0xE1,0xF3,0xCF,0x82,0x3E,0x1E, // .#########..#####..###..########.......######...#####..####....#####..####..#####.....#...#####....####.
  0xFF,0xCF,0x9E,0x7F,0x01,0xF0,0x7D,0xE1,0xF3,0xCF,0xE0,0x3C,0x1E, // ##########..#####..####..#######.......#####.....#####.####....#####..####..#######.......####.....####.
  0xFF,0x9F,0x3E,0x7F,0x01,0xF0,0x7D,0xE1,0xF3,0xCF,0xFC,0x3F,0xFF, // #########..#####..#####..#######.......#####.....#####.####....#####..####..##########....##############
  0xFF,0x9E,0x3C,0x7F,0x01,0xF0,0x7D,0xE1,0xF3,0xC7,0xFF,0x3F,0xFF, // #########..####...####...#######.......#####.....#####.####....#####..####...###########..##############
  0xFF,0x9E,0x7C,0xFF,0x01,0xF0,0x7D,0xE1,0xF3,0xC1,0xFF,0xBF,0xFF, // #########..####..#####..########.......#####.....#####.####....#####..####.....##########.##############
  0x7F,0x9C,0xF9,0xFF,0x01,0xF0,0x7D,0xE1,0xF3,0xC0,0x3F,0xBC,0x00, // .########..###..#####..#########.......#####.....#####.####....#####..####........#######.####..........
  0x7F,0x9C,0xF9,0xFF,0x01,0xF0,0xF9,0xF1,0xF3,0xC4,0x0F,0xBE,0x08, // .########..###..#####..#########.......#####....#####..#####...#####..####...#......#####.#####.....#...
  0x7F,0x98,0x03,0xFE,0x01,0xFF,0xF9,0xFF,0xF3,0xC7,0x8F,0xBF,0xFC, // .########..##.........#########........##############..#############..####...####...#####.############..
  0x7F,0x98,0x03,0xFE,0x01,0xFF,0xF1,0xFF,0xF3,0xCF,0xFF,0x1F,0xFE, // .########..##.........#########........#############...#############..####..############...############.
  0x3F,0x93,0xFF,0xFE,0x01,0xFF,0xE0,0xFF,0xF3,0xCF,0xFE,0x0F,0xFC, // ..#######..#..#################........############.....############..####..###########.....##########..
  0x3F,0x83,0xFF,0xFC,0x01,0xF3,0xC0,0x78,0xF3,0xC1,0xF8,0x03,0xF0, // ..#######.....################.........#####..####.......####...####..####.....######.........######....
  0x1F,0x87,0xFF,0xF8,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...######....################..........#####............................................................
  0x0F,0xCF,0xFF,0xF8,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....######..#################..........#####............................................................
  0x0F,0xFF,0xFF,0xF0,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ....########################...........#####............................................................
  0x07,0xFF,0xFF,0xE0,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .....######################............#####............................................................
  0x01,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .......###################..............................................................................
  0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........################................................................................................
  0x00,0x3F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..........#############.................................................................................
  0x00,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00  // .............######.....................................................................................
};


/**
 * Icons
 * 
 * Made with Marlin Bitmap Converter
 * http://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'firmware-logo.png'
 */

#define icon_width  8
#define icon_height 8

static const uint8_t hotend_icon[] = {
  0x7C, // .#####..
  0x10, // ...#....
  0x7C, // .#####..
  0x10, // ...#....
  0x38, // ..###...
  0x38, // ..###...
  0x10, // ...#....
  0x00  // ........
};

static const uint8_t bed_icon[] = {
  0x24, // ..#..#..
  0x48, // .#..#...
  0x24, // ..#..#..
  0x48, // .#..#...
  0x24, // ..#..#..
  0x00, // ........
  0xFE, // #######.
  0x00  // ........
};

static const uint8_t fan_icon[] = {
  0x00, // ........
  0x4C, // .#..##..
  0x68, // .##.#...
  0x10, // ...#....
  0x2C, // ..#.##..
  0x64, // .##..#..
  0x00, // ........
  0x00  // ........
};

static const uint8_t speed_icon[] = {
  0x90, // #..#....
  0x48, // .#..#...
  0x24, // ..#..#..
  0x12, // ...#..#.
  0x24, // ..#..#..
  0x48, // .#..#...
  0x90, // #..#....
  0x00  // ........
};

static const uint8_t time_icon[] = {
  0x38, // ..###...
  0x44, // .#...#..
  0x92, // #..#..#.
  0x9E, // #..####.
  0x82, // #.....#.
  0x44, // .#...#..
  0x38, // ..###...
  0x00  // ........
};