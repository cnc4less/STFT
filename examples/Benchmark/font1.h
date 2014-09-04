#define fontArlrdbd12Size          12
#define fontArlrdbd12FirstChar     33
#define fontArlrdbd12Height        19

uint16_t fontArlrdbd12Offsets[] PROGMEM = { 0, 15, 31, 106, 169, 262, 331, 339, 372, 405, 440, 504, 513, 524, 530, 566, 623, 674, 725, 776, 839, 890, 947, 998, 1055, 1112, 1127, 1145, 1203, 1239, 1297, 1342, 1450, 1519, 1576, 1645, 1714, 1771, 1822, 1897, 1960, 1981, 2014, 2077, 2128, 2203, 2266, 2341, 2398, 2485, 2548, 2605, 2668, 2731, 2800, 2899, 2968, 3031, 3100, 3133, 3169, 3202, 3233, 3240, 3251, 3295, 3352, 3391, 3448, 3492, 3531, 3588, 3639, 3654, 3680, 3731, 3746, 3812, 3851, 3895, 3952, 4009, 4042, 4081, 4120, 4159, 4203, 4265, 4309, 4366, 4405, 4464, 4483, 4542, 4567, 4624, 4681, 4732, 4818, 4911, 4989, 5046 }; // last value = size of font data
uint8_t  fontArlrdbd12Data[]    PROGMEM = {
  2,  12,   3, 159, 159, 159, 159, 159, 143, 142, 109,   0,   0, 159, 159, /* ! */
  5,   5,   3, 126,   8, 215, 224, 141, 126,   8, 215, 224, 141,  36,   2,   4, /* " */
 12,  12,   3,   0,   0,  94,   0, 199,   0,   0,   0, 139,   0, 243,   0,   0,   0, 184,   3, 240,   0,   0,   0, 244,   6, 208,   0,  14, 255, 255, 255, 255, 243,   2,  56, 211,  62, 115,  48,   0,  10, 144,  31,  32,   0,   0,  14,  80,  94,   0,   0, 207, 255, 255, 255, 255,  64,  35, 141,  51, 231,  51,   0,   0, 169,   2, 241,   0,   0,   0, 244,   6, 208,   0,   0, /* # */
  8,  15,   3,   0,   6,  96,   0,   0,   6,  96,   0,   5, 206, 253, 161,  95, 119, 132, 145, 157,   6,  96,   0, 143,  54,  96,   0,  28, 254, 198,  16,   0,  58, 222, 227,   0,   6,  96, 219,   0,   6,  96, 172, 151,  55, 135, 247,  74, 239, 253, 112,   0,   6,  96,   0,   0,   6,  96,   0,   0,   3,  48,   0, /* $ */
 15,  12,   3,   2, 191, 195,   0,   0, 169,   0,   0, 202,   7, 224,   0,  78,   0,   0,  15,  48,  15,  48,  13,  80,   0,   0, 242,   0, 243,   8, 176,   0,   0,  12, 144, 126,   2, 242,   0,   0,   0,  43, 252,  48, 184,   0,   0,   0,   0,   0,   0,  94,   1, 190, 195,   0,   0,   0,  14,  80, 186,   6, 224,   0,   0,   8, 176,  15,  48,  15,  64,   0,   2, 242,   0, 243,   0, 244,   0,   0, 199,   0,  11, 160, 126,   0,   0,  93,   0,   0,  27, 253,  64, /* % */
 11,  12,   3,   0,  93, 254, 160,   0,   0,  79, 164, 107,  16,   0,   9, 224,   0,   0,   0,   0, 143,  16,   0,   0,   0,   2, 251,   0,   0,   0,   0, 174, 250,   0,   0,  65, 127,  53, 250,   0,  47,  77, 160,   5, 249,   6, 240, 249,   0,   6, 249, 217,  12, 208,   0,   6, 255,  16,  63, 179,  19, 175, 248,   0,  59, 239, 217,  39, 247, /* & */
  2,   5,   3, 126, 126, 126, 126,  36, /* ' */
  4,  15,   3,   0, 155,   2, 243,   9, 192,  15, 112,  79,  48, 127,   0, 159,   0, 158,   0, 143,   0,  95,  32,  31,  80,  11, 160,   4, 241,   0, 184,   0,  20, /* ( */
  4,  15,   3, 124,   0,  14,  80,   8, 208,   3, 243,   0, 248,   0, 203,   0, 189,   0, 173,   0, 204,   0, 233,   2, 245,   7, 224,  13, 128,  94,   0,  50,   0, /* ) */
  8,   8,   3,   0,   7, 112,   0,  36,   7, 112,  66,  43, 184, 154, 178,   0,  79, 244,   0,   5, 203, 204,  80,  74,  23, 113, 148,   0,   7, 112,   0,   0,   2,  32,   0, /* * */
 11,  11,   4,   0,   0,   0,   0,   0,   0,   0,   0, 245,   0,   0,   0,   0,  15,  80,   0,   0,   0,   0, 245,   0,   0,   1,  17,  31,  97,  17,   4, 255, 255, 255, 255, 251,  20,  68,  79, 132,  68,  48,   0,   0, 245,   0,   0,   0,   0,  15,  80,   0,   0,   0,   0, 245,   0,   0,   0,   0,  15,  80,   0,   0, /* + */
  3,   4,  13,  29, 114, 247, 111,  26, 128, /* , */
  5,   3,   9,   1,  17,  19, 255, 255,   3,  51,   3, /* - */
  3,   2,  13,  79,  84, 245, /* . */
  5,  13,   3,   0,   1, 240,   0, 110,   0,  11, 144,   0, 244,   0,  95,   0,  10, 160,   0, 245,   0,  79,  16,   9, 176,   0, 230,   0,  63,  16,   8, 192,   0, 215,   0,   0, /* / */
  9,  12,   3,   1, 174, 251,  32,   0, 222, 101, 222,  16,  95,  64,   1, 248,  10, 224,   0,  11, 208, 219,   0,   0, 143,  14, 160,   0,   7, 241, 234,   0,   0, 127,  29, 176,   0,   8, 240, 174,   0,   0, 189,   6, 243,   0,  31, 128,  13, 230,  93, 225,   0,  26, 239, 178,   0, /* 0 */
  8,  12,   3,  25, 207, 242,   0,  62, 187, 242,   0,   0,   7, 242,   0,   0,   7, 242,   0,   0,   7, 242,   0,   0,   7, 242,   0,   0,   7, 242,   0,   0,   7, 242,   0,   0,   7, 242,   0,   0,   7, 242,   0,   5,  89, 246,  83,  15, 255, 255, 251, /* 1 */
  8,  12,   3,  73, 223, 217,  16, 204, 117, 143, 208,  32,   0,   5, 246,   0,   0,   1, 247,   0,   0,   5, 245,   0,   0,  30, 192,   0,   0, 206,  32,   0,  11, 243,   0,   0, 191,  48,   0,  10, 243,   0,   0, 159, 149,  85,  83, 223, 255, 255, 249, /* 2 */
  8,  12,   3,  59, 239, 235,  48,  90, 117, 125, 243,   0,   0,   1, 248,   0,   0,   0, 248,   0,   0,  42, 242,   0, 207, 254,  48,   0,  35,  92, 227,   0,   0,   0, 235,   0,   0,   0, 190,   0,   0,   1, 235, 185, 101, 142, 243, 108, 239, 218,  32, /* 3 */
 10,  12,   3,   0,   0,  10, 250,   0,   0,   0,  78, 250,   0,   0,   0, 230, 250,   0,   0,   9, 192, 250,   0,   0,  63,  32, 250,   0,   0, 200,   0, 250,   0,   7, 224,   0, 250,   0,  31,  97,  17, 250,  16,  63, 255, 255, 255, 244,   4,  68,  68, 251,  65,   0,   0,   0, 250,   0,   0,   0,   0, 250,   0, /* 4 */
  8,  12,   3,  79, 255, 255, 224,  79, 117,  85,  64,  79,  32,   0,   0,  79,  32,   0,   0,  79, 255, 250,  32,  57,  84, 127, 225,   0,   0,   3, 248,   0,   0,   0, 235,   0,   0,   0, 235,   0,   0,   4, 248, 185, 102, 159, 225, 124, 239, 233,  16, /* 5 */
  9,  12,   3,   0,  76, 255, 195,   0, 111, 183, 105,  80,  47, 144,   0,   0,   8, 241,   0,   0,   0, 188, 110, 254, 112,  13, 254, 100, 159, 112, 223,  80,   0, 190,  12, 240,   0,   7, 242, 159,   0,   0, 127,  36, 245,   0,  12, 224,  11, 247,  90, 246,   0,   9, 239, 213,   0, /* 6 */
  8,  12,   3, 191, 255, 255, 252,  53,  85,  87, 248,   0,   0,   8, 242,   0,   0,  14, 192,   0,   0,  79,  96,   0,   0, 175,   0,   0,   0, 250,   0,   0,   6, 244,   0,   0,  12, 224,   0,   0,  47, 128,   0,   0, 143,  32,   0,   0, 220,   0,   0, /* 7 */
  9,  12,   3,   3, 190, 252,  80,   3, 252,  85, 191,  80, 143,  16,   0, 235,   8, 240,   0,  13, 176,  47, 145,  23, 244,   0,  62, 255, 245,   0,  46, 180,  73, 245,  11, 224,   0,  11, 224, 235,   0,   0, 143,  28, 224,   0,  11, 240,  95, 197,  90, 248,   0,  76, 239, 198,   0, /* 8 */
  9,  12,   3,   3, 207, 234,  16,   3, 252,  86, 237,   0, 190,   0,   2, 247,  14, 160,   0,  14, 192, 250,   0,   0, 223,  12, 208,   0,  31, 240, 111, 145,  43, 255,   0, 127, 255, 187, 224,   0,   2,  16, 219,   0,   0,   0, 111,  64,  57, 102, 175, 144,   2, 190, 253,  96,   0, /* 9 */
  3,   8,   7,  47, 129, 248,   0,   0,   0,   0,   0,   0,  31, 130, 248, /* : */
  3,  10,   7,  47, 129, 248,   0,   0,   0,   0,   0,   0,  29, 114, 247, 111,  26, 128, /* ; */
 11,  10,   5,   0,   0,   0,   0,   0,  32,   0,   0,   0,  40, 235,   0,   0,  22, 207, 232,  32,   5, 191, 233,  48,   0,  63, 250,  80,   0,   0,   3, 239, 181,   0,   0,   0,   0,  74, 255, 164,   0,   0,   0,   0,  91, 254, 147,   0,   0,   0,   1, 125, 176,   0,   0,   0,   0,   1, /* < */
 11,   6,   7,   1,  17,  17,  17,  17,   4, 255, 255, 255, 255, 251,  20,  68,  68,  68,  68,  32,  17,  17,  17,  17,  16,  79, 255, 255, 255, 255, 177,  68,  68,  68,  68,  66, /* = */
 11,  10,   5,  17,   0,   0,   0,   0,   4, 250,  64,   0,   0,   0,   6, 191, 233,  48,   0,   0,   0,  23, 207, 215,  32,   0,   0,   0,  40, 239, 144,   0,   0,   3, 158, 248,   0,   2, 141, 252,  97,   0, 124, 254, 130,   0,   0,  79, 148,   0,   0,   0,   1,   0,   0,   0,   0,   0, /* > */
  7,  12,   3,  75, 239, 179,  13, 165, 110, 225,  32,   0,  79,  64,   0,   6, 243,   0,   3, 250,   0,   2, 235,   0,   0, 189,   0,   0,  14, 144,   0,   0, 200,   0,   0,   0,   0,   0,   0, 234,   0,   0,  15, 160,   0, /* ? */
 14,  15,   4,   0,   0, 123, 238, 216,  32,   0,   0,  62, 198,  51,  90, 246,   0,   3, 246,   0,   0,   0,  62,  96,  14,  96,   0,   0,   0,   3, 242, 108,   0,  26, 237, 108,  80, 168, 182,   0, 188,  68, 207,  80,  92, 227,   2, 242,   0,  47,  80,  77, 227,   4, 240,   0,  15,  80,  92, 197,   2, 241,   0,  31,  80, 184, 138,   0, 218,  17, 175, 104, 225,  31,  48,  45, 255, 156, 250,  16,   6, 227,   0,  17,   1,   0,   0,   0, 127, 131,   0,  22, 212,   0,   0,   2, 175, 255, 251,  80,   0,   0,   0,   0,  17,   0,   0,   0, /* @ */
 11,  12,   3,   0,   0, 159, 128,   0,   0,   0,  15, 254,   0,   0,   0,   5, 246, 244,   0,   0,   0, 189,  14, 160,   0,   0,  31, 128, 143,  16,   0,   7, 242,   3, 246,   0,   0, 221,   0,  13, 192,   0,  63, 129,  17, 159,  32,   9, 255, 255, 255, 248,   0, 236,  68,  68,  76, 224,  95,  80,   0,   0, 111,  75, 240,   0,   0,   0, 250, /* A */
  9,  12,   3, 111, 255, 254, 162,   6, 246,  68, 126, 224, 111,  32,   0,  95,  70, 242,   0,   4, 244, 111,  48,   3, 206,   6, 255, 255, 253,  32, 111,  83,  53, 206,  38, 242,   0,   1, 250, 111,  32,   0,  13, 198, 242,   0,   1, 251, 111, 100,  70, 223,  70, 255, 255, 235,  64, /* B */
 11,  12,   3,   0,   3, 174, 254, 181,   0,   6, 253, 117, 106, 244,   3, 250,   0,   0,   2,  48, 175,  16,   0,   0,   0,  15, 176,   0,   0,   0,   0, 249,   0,   0,   0,   0,  15, 144,   0,   0,   0,   0, 251,   0,   0,   0,   0,  10, 241,   0,   0,   0,   0,  63, 160,   0,   0,  35,   0, 111, 215,  86, 175,  64,   0,  58, 239, 235,  64, /* C */
 11,  12,   3, 111, 255, 253, 165,   0,   6, 246,  69, 123, 251,   0, 111,  32,   0,   6, 249,   6, 242,   0,   0,  11, 240, 111,  32,   0,   0, 111,  54, 242,   0,   0,   4, 245, 111,  32,   0,   0,  95,  86, 242,   0,   0,   6, 243, 111,  32,   0,   0, 191,   6, 242,   0,   0, 111, 128, 111, 100,  87, 191, 176,   6, 255, 255, 234,  80,   0, /* D */
  9,  12,   3, 111, 255, 255, 255,   6, 246,  85,  85,  80, 111,  32,   0,   0,   6, 242,   0,   0,   0, 111,  49,  17,  16,   6, 255, 255, 255, 176, 111,  84,  68,  66,   6, 242,   0,   0,   0, 111,  32,   0,   0,   6, 242,   0,   0,   0, 111, 101,  85,  85,   6, 255, 255, 255, 241, /* E */
  8,  12,   3, 111, 255, 255, 244, 111, 101,  85,  81, 111,  32,   0,   0, 111,  32,   0,   0, 111,  49,  17,   0, 111, 255, 255, 192, 111,  84,  68,  48, 111,  32,   0,   0, 111,  32,   0,   0, 111,  32,   0,   0, 111,  32,   0,   0, 111,  32,   0,   0, /* F */
 12,  12,   3,   0,   3, 174, 255, 200,  16,   0, 111, 215,  85, 158, 192,   3, 250,   0,   0,   1, 112,  11, 241,   0,   0,   0,   0,  15, 176,   0,   0,   0,   0,  15, 144,   0,   0,   0,   0,  15, 144,   0,  15, 255, 241,  15, 176,   0,   3,  57, 241,  11, 241,   0,   0,   7, 241,   3, 250,   0,   0,   7, 241,   0, 111, 215,  85, 141, 241,   0,   3, 174, 255, 199,  16, /* G */
 10,  12,   3, 111,  32,   0,   1, 247, 111,  32,   0,   1, 247, 111,  32,   0,   1, 247, 111,  32,   0,   1, 247, 111,  49,  17,  18, 247, 111, 255, 255, 255, 247, 111,  84,  68,  69, 247, 111,  32,   0,   1, 247, 111,  32,   0,   1, 247, 111,  32,   0,   1, 247, 111,  32,   0,   1, 247, 111,  32,   0,   1, 247, /* H */
  3,  12,   3, 111,  38, 242, 111,  38, 242, 111,  38, 242, 111,  38, 242, 111,  38, 242, 111,  38, 242, /* I */
  4,  15,   3,   6, 242,   6, 242,   6, 242,   6, 242,   6, 242,   6, 242,   6, 242,   6, 242,   6, 242,   6, 242,   6, 242,   7, 242,  10, 240, 143, 160, 233,   0, /* J */
 10,  12,   3, 111,  32,   0,  62, 209, 111,  32,   3, 236,  16, 111,  32,  63, 192,   0, 111,  36, 251,   0,   0, 111, 127, 176,   0,   0, 111, 253,   0,   0,   0, 111, 191, 128,   0,   0, 111,  41, 247,   0,   0, 111,  32, 175, 112,   0, 111,  32,  10, 246,   0, 111,  32,   0, 175,  96, 111,  32,   0,  11, 245, /* K */
  8,  12,   3, 111,  32,   0,   0, 111,  32,   0,   0, 111,  32,   0,   0, 111,  32,   0,   0, 111,  32,   0,   0, 111,  32,   0,   0, 111,  32,   0,   0, 111,  32,   0,   0, 111,  32,   0,   0, 111,  32,   0,   0, 111, 101,  85,  84, 111, 255, 255, 253, /* L */
 12,  12,   3, 111, 241,   0,   0,  79, 244, 111, 247,   0,   0, 175, 244, 111, 173,   0,   0, 249, 244, 111,  79,  48,   6, 229, 244, 111,  28, 144,  12, 148, 244, 111,  22, 224,  47,  52, 244, 111,  17, 244, 125,   4, 244, 111,  16, 186, 216,   4, 244, 111,  16,  95, 242,   4, 244, 111,  16,  10, 144,   4, 244, 111,  16,   0,   0,   4, 244, 111,  16,   0,   0,   4, 244, /* M */
 10,  12,   3, 111, 224,   0,   2, 246, 111, 247,   0,   2, 246, 111, 190,   0,   2, 246, 111,  63, 128,   2, 246, 111,  25, 241,   2, 246, 111,  17, 248,   2, 246, 111,  16, 143,  18, 246, 111,  16,  31, 146, 246, 111,  16,   8, 243, 246, 111,  16,   1, 251, 246, 111,  16,   0, 127, 246, 111,  16,   0,  14, 246, /* N */
 12,  12,   3,   0,   4, 190, 253, 145,   0,   0, 127, 198,  88, 238,  32,   3, 250,   0,   0,  47, 208,  10, 241,   0,   0,   7, 244,  15, 176,   0,   0,   2, 248,  15, 144,   0,   0,   0, 250,  15, 144,   0,   0,   0, 250,  15, 176,   0,   0,   2, 248,  11, 241,   0,   0,   7, 244,   3, 250,   0,   0,  46, 208,   0, 127, 198,  88, 238,  32,   0,   4, 190, 253, 145,   0, /* O */
  9,  12,   3, 111, 255, 252,  96,   6, 246,  69, 191, 128, 111,  32,   0, 223,   6, 242,   0,   9, 241, 111,  32,   0, 191,   6, 243,   1, 127, 160, 111, 255, 255, 161,   6, 245,  50,   0,   0, 111,  32,   0,   0,   6, 242,   0,   0,   0, 111,  32,   0,   0,   6, 242,   0,   0,   0, /* P */
 12,  14,   3,   0,   4, 190, 253, 145,   0,   0, 127, 198,  88, 238,  32,   3, 250,   0,   0,  47, 208,  10, 241,   0,   0,   8, 244,  15, 176,   0,   0,   2, 248,  15, 144,   0,   0,   0, 250,  15, 144,   0,   0,   0, 250,  15, 176,   0,   0,   2, 248,  11, 241,   0,   0,   7, 244,   3, 250,   0,   0,  46, 192,   0, 127, 198,  71, 238,  16,   0,   4, 190, 255, 192,   0,   0,   0,   0,   9, 245,   0,   0,   0,   0,   0, 191,  48, /* Q */
 10,  12,   3, 111, 255, 253, 112,   0, 111, 100,  90, 248,   0, 111,  32,   0, 206,   0, 111,  32,   0, 159,  16, 111,  32,   0, 191,   0, 111,  48,  22, 249,   0, 111, 255, 255, 144,   0, 111,  83,  92, 242,   0, 111,  32,   0, 221,   0, 111,  32,   0,  95,  80, 111,  32,   0,  12, 208, 111,  32,   0,   4, 246, /* R */
  9,  12,   3,   4, 190, 253, 164,   6, 252, 101, 123, 128, 221,   0,   0,   0,  14, 176,   0,   0,   0, 175, 113,   0,   0,   1, 207, 254, 164,   0,   0,  39, 191, 247,   0,   0,   0,  28, 241,   0,   0,   0, 111,  50,   0,   0,   9, 242, 235, 117,  90, 251,   5, 173, 255, 215,   0, /* S */
 10,  12,   3, 255, 255, 255, 255, 253,  85,  85, 236,  85,  84,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0, /* T */
 10,  12,   3, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 143,  16,   0,   6, 243,  79, 112,   0,  11, 224,  11, 249,  86, 191,  96,   0, 141, 255, 197,   0, /* U */
 11,  12,   3, 190,   0,   0,   0,  15, 165, 245,   0,   0,   6, 244,  14, 176,   0,   0, 190,   0, 159,  16,   0,  31, 128,   3, 246,   0,   7, 242,   0,  13, 192,   0, 220,   0,   0, 127,  32,  63,  96,   0,   1, 248,   9, 241,   0,   0,  11, 224, 234,   0,   0,   0,  95, 143,  64,   0,   0,   0, 255, 224,   0,   0,   0,   9, 248,   0,   0, /* V */
 16,  12,   3,  95,  48,   0,  31, 224,   0,   6, 242,  31, 112,   0,  95, 242,   0,  10, 224,  13, 176,   0, 155, 214,   0,  14, 176,   9, 240,   0, 215, 170,   0,  47, 112,   6, 243,   1, 243, 110,   0, 111,  48,   2, 247,   4, 240,  47,  32, 175,   0,   0, 235,   8, 176,  14,  80, 219,   0,   0, 174,  12, 128,  10, 145, 247,   0,   0, 111,  63,  64,   7, 213, 243,   0,   0,  47, 191,   0,   3, 251, 240,   0,   0,  14, 252,   0,   0, 255, 176,   0,   0,  10, 248,   0,   0, 191, 112,   0, /* W */
 11,  12,   3,  10, 225,   0,   0, 205,   0,  30, 160,   0, 127,  48,   0,  95,  80,  47, 144,   0,   0, 190,  28, 224,   0,   0,   1, 253, 244,   0,   0,   0,   8, 250,   0,   0,   0,   0, 239, 224,   0,   0,   0, 159,  79, 144,   0,   0,  79, 112, 127,  48,   0,  13, 192,   0, 221,   0,   8, 242,   0,   3, 248,   3, 248,   0,   0,   8, 242, /* X */
 10,  12,   3, 190,  16,   0,   3, 247,  31, 160,   0,  13, 192,   6, 244,   0, 143,  48,   0, 190,  18, 248,   0,   0,  47, 172, 208,   0,   0,   6, 255,  48,   0,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0,   0,   0, 235,   0,   0, /* Y */
 11,  12,   3,  31, 255, 255, 255, 255,  16,  85,  85,  85, 127, 192,   0,   0,   0,  12, 226,   0,   0,   0,   9, 244,   0,   0,   0,   6, 247,   0,   0,   0,   3, 251,   0,   0,   0,   1, 221,  16,   0,   0,   0, 191,  48,   0,   0,   0, 127,  96,   0,   0,   0,  79, 144,   0,   0,   0,  30, 229,  85,  85,  85,  20, 255, 255, 255, 255, 244, /* Z */
  4,  15,   3, 175, 251, 173,  33, 173,   0, 173,   0, 173,   0, 173,   0, 173,   0, 173,   0, 173,   0, 173,   0, 173,   0, 173,   0, 173,   0, 175, 250,  18,  33, /* [ */
  5,  13,   3, 215,   0,   8, 192,   0,  63,  16,   0, 230,   0,   9, 176,   0,  79,  16,   0, 245,   0,  10, 160,   0,  95,   0,   0, 244,   0,  11, 144,   0, 110,   0,   1,  15, /* \ */
  4,  15,   3, 127, 254,   2, 174,   0, 158,   0, 158,   0, 158,   0, 158,   0, 158,   0, 158,   0, 158,   0, 158,   0, 158,   0, 158,   0, 158, 111, 254,   2,  33, /* ] */
 11,   5,   3,   0,   0, 143, 209,   0,   0,   0, 127, 158, 209,   0,   0, 111,  96,  46, 192,   0,  95,  80,   0,  29, 176,   7,  64,   0,   0,  23,   3, /* ^ */
  8,   1,  18, 255, 255, 255, 255, /* _ */
  5,   3,   2,  79,  64,   0, 110,  16,   0, 139,   0, /* ` */
  9,   9,   6,   2, 174, 253, 144,   0,  72,  83, 109, 192,   0,   0,   0,  63,  32,   7, 206, 255, 245,   8, 246,  50,  63,  80, 232,   0,   3, 245,  15, 112,   0, 143,  80, 189,  32, 110, 245,   1, 174, 251,  63,   5, /* a */
  9,  12,   3, 142,   0,   0,   0,   8, 224,   0,   0,   0, 142,   0,   0,   0,   8, 227, 207, 231,   0, 143, 230,  73, 246,   8, 245,   0,  10, 224, 143,   0,   0,  95,  40, 224,   0,   3, 243, 143,   0,   0,  95,  40, 245,   0,  10, 224, 143, 230,  73, 246,   8, 227, 207, 231,   0, /* b */
  8,   9,   6,   0,  42, 239, 215,   3, 253,  84, 105,  11, 224,   0,   0,  15, 128,   0,   0,  31, 112,   0,   0,  15, 128,   0,   0,  11, 224,   0,   0,   3, 253, 100, 105,   0,  59, 255, 215, /* c */
  9,  12,   3,   0,   0,   0,  11, 176,   0,   0,   0, 187,   0,   0,   0,  11, 176,   5, 223, 213, 187,   4, 251,  69, 238, 176, 205,   0,   3, 251,  15, 128,   0,  13, 177, 246,   0,   0, 203,  15, 112,   0,  13, 176, 203,   0,   2, 251,   4, 247,   2, 207, 176,   5, 223, 214, 187, /* d */
  9,   9,   6,   0,  43, 255, 195,   0,  47, 197,  74, 243,  11, 224,   0,  13, 160, 248,   0,   0, 142,  31, 255, 255, 255, 240, 249,  34,  34,  34,  11, 208,   0,   0,   0,  47, 198,  69, 136,   0,  42, 239, 235,   4, /* e */
  6,  12,   3,   0,  93, 255,   1, 249,  51,   3, 243,   0, 175, 255, 249,  21, 244,  33,   4, 243,   0,   4, 243,   0,   4, 243,   0,   4, 243,   0,   4, 243,   0,   4, 243,   0,   4, 243,   0, /* f */
  9,  12,   6,   0,  93, 253,  91, 176,  79, 164,  93, 235,  12, 192,   0,  47, 176, 247,   0,   0, 219,  31,  96,   0,  12, 176, 247,   0,   0, 219,  12, 192,   0,  47, 176,  79, 164,  93, 235,   0,  93, 253,  92, 160,   0,   0,   1, 247,   0, 148,  53, 222,  16,  11, 239, 234,  32, /* g */
  8,  12,   3, 142,   0,   0,   0, 142,   0,   0,   0, 142,   0,   0,   0, 142,  44, 253,  96, 143, 215,  73, 244, 143,  64,   0, 218, 143,   0,   0, 172, 142,   0,   0, 172, 142,   0,   0, 172, 142,   0,   0, 172, 142,   0,   0, 172, 142,   0,   0, 172, /* h */
  2,  12,   3, 127, 108,   0, 127, 127, 127, 127, 127, 127, 127, 127, 127, /* i */
  3,  15,   3,   7, 240, 108,   0,   0, 127,   7, 240, 127,   7, 240, 127,   7, 240, 127,   7, 240, 127,   8, 228, 218, 251,   2, /* j */
  8,  12,   3, 142,   0,   0,   0, 142,   0,   0,   0, 142,   0,   0,   0, 142,   0,   6, 247, 142,   0, 127,  96, 142,   9, 244,   0, 142, 174,  48,   0, 143, 251,   0,   0, 142,  63, 160,   0, 142,   3, 250,   0, 142,   0,  63, 160, 142,   0,   3, 251, /* k */
  2,  12,   3, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, /* l */
 14,   9,   6, 142,  60, 253,  80, 109, 251,  16, 143, 214,  75, 248, 197,  94, 176, 143,  64,   1, 254,   0,   6, 241, 143,   0,   0, 234,   0,   3, 243, 142,   0,   0, 233,   0,   3, 243, 142,   0,   0, 233,   0,   3, 243, 142,   0,   0, 233,   0,   3, 243, 142,   0,   0, 233,   0,   3, 243, 142,   0,   0, 233,   0,   3, 243, /* m */
  8,   9,   6, 142,  60, 253,  96, 143, 196,  22, 244, 143,  48,   0, 218, 143,   0,   0, 172, 142,   0,   0, 172, 142,   0,   0, 172, 142,   0,   0, 172, 142,   0,   0, 172, 142,   0,   0, 172, /* n */
  9,   9,   6,   0,  76, 255, 178,   0,  79, 180,  93, 225,  12, 208,   0,  31, 144, 248,   0,   0, 189,  31,  96,   0,  10, 224, 248,   0,   0, 189,  12, 208,   0,  31, 144,  79, 181,  93, 225,   0,  76, 255, 178,   0, /* o */
  9,  12,   6, 142,  77, 254, 112,   8, 253,  48, 111,  96, 143,  64,   0, 158,   8, 240,   0,   4, 242, 142,   0,   0,  63,  56, 240,   0,   5, 242, 143,  96,   0, 190,   8, 254, 116, 159,  96, 142,  60, 254, 112,   8, 224,   0,   0,   0, 142,   0,   0,   0,   8, 224,   0,   0,   0, /* p */
  9,  12,   6,   0,  93, 253,  91, 176,  79, 164,  94, 235,  12, 208,   0,  63, 176, 247,   0,   0, 219,  31,  96,   0,  12, 176, 247,   0,   0, 219,  12, 208,   0,  63, 176,  79, 180,  94, 235,   0,  93, 253,  91, 176,   0,   0,   0, 187,   0,   0,   0,  11, 176,   0,   0,   0, 187, /* q */
  6,  10,   5,   0,   0,   0, 142,  76, 249, 143, 212,  18, 143,  64,   0, 143,   0,   0, 142,   0,   0, 142,   0,   0, 142,   0,   0, 142,   0,   0, 142,   0,   0, /* r */
  8,   9,   6,   1, 174, 254, 176,  12, 213,  53, 145,  15,  96,   0,   0,  12, 230,  32,   0,   1, 158, 254, 112,   0,   0,  40, 245,   0,   0,   0, 248,  28, 100,  73, 243,   9, 223, 252,  64, /* s */
  6,  12,   3,   4, 112,   0,   8, 240,   0,   8, 240,   0, 159, 255, 254,  25, 242,  33,   8, 240,   0,   8, 240,   0,   8, 240,   0,   8, 240,   0,   7, 240,   0,   5, 246,  50,   0, 158, 254, /* t */
  8,   9,   6, 172,   0,   0, 203, 172,   0,   0, 203, 172,   0,   0, 203, 172,   0,   0, 203, 172,   0,   0, 203, 157,   0,   0, 203, 126,   0,   1, 251,  47, 129,  43, 251,   5, 223, 213, 203, /* u */
  9,   9,   6,  95,  32,   0,  11, 208, 248,   0,   1, 247,   9, 224,   0, 127,  16,  63,  64,  12, 176,   0, 218,   2, 245,   0,   8, 240, 143,   0,   0,  47,  94, 160,   0,   0, 206, 244,   0,   0,   6, 254,   0,   0, /* v */
 13,   9,   6,  63,  48,   6, 248,   0,  47,  64, 231,   0, 175, 192,   6, 240,  11, 176,  14, 143,   0, 172,   0, 111,   3, 241, 244,  14, 128,   2, 244, 124,  11, 130, 244,   0,  14, 139, 128, 124, 111,   0,   0, 172, 244,   3, 251, 192,   0,   6, 255,   0,  15, 248,   0,   0,  47, 192,   0, 191,  64,   0, /* w */
  9,   9,   6,  13, 192,   0,  79,  96,  63, 128,  30, 176,   0, 127,  75, 225,   0,   0, 191, 244,   0,   0,   5, 252,   0,   0,   1, 236, 246,   0,   0, 190,  24, 242,   0, 127,  48,  12, 208,  63, 128,   0,  47,   9, /* x */
  9,  12,   6,  79,  48,   0,  11, 192, 233,   0,   2, 246,   7, 240,   0, 143,   0,  31,  96,  14, 144,   0, 172,   5, 242,   0,   3, 243, 204,   0,   0,  13, 207,  80,   0,   0, 111, 224,   0,   0,   1, 248,   0,   0,   0, 111,  32,   0,   2,  78, 176,   0,   0, 191, 193,   0,   0, /* y */
  8,   9,   6,  31, 255, 255, 251,   2,  34,  38, 248,   0,   0,  30, 176,   0,   0, 205,  16,   0,  10, 226,   0,   0, 143,  64,   0,   5, 246,   0,   0,  47, 178,  34,  33,  95, 255, 255, 251, /* z */
  7,  16,   3,   0,   9, 239,  48,   6, 246,  32,   0, 142,   0,   0,   9, 224,   0,   0, 157,   0,   0,  10, 208,   0,   2, 233,   0,  15, 252,  16,   0,  37, 248,   0,   0,  10, 208,   0,   0, 157,   0,   0,   9, 224,   0,   0, 142,   0,   0,   6, 243,   0,   0,  28, 255,  32,   0,   1,  32, /* { */
  2,  16,   3, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, 245, /* | */
  7,  16,   3, 254, 177,   0,   2,  79, 128,   0,   0, 187,   0,   0,  11, 192,   0,   0, 188,   0,   0,  10, 208,   0,   0, 127,  64,   0,   0, 175, 242,   0,  95, 115,   0,  10, 208,   0,   0, 172,   0,   0,  11, 192,   0,   0, 187,   0,   0,  30, 144,   0, 255, 210,   0,   2,  16,   0,   0, /* } */
 11,   4,   8,   0,   0,   0,   0,   0,   0, 109, 254, 165,  18, 122,  77, 100, 107, 255, 253,  49,   0,   0,   0,  50,   0, /* ~ */
  9,  12,   3,   0, 174,  10, 240,   0,   6, 128,  89,   0,   0,   0,   0,   0,   0,  42, 239, 217,   0,   4, 133,  54, 220,   0,   0,   0,   3, 242,   0, 124, 239, 255,  80, 143,  99,  35, 245,  14, 128,   0,  63,  80, 247,   0,   8, 245,  11, 210,   6, 239,  80,  26, 239, 179, 245, /* ä */
  9,  12,   3,   0, 111,  37, 243,   0,   4, 145,  57,  32,   0,   0,   0,   0,   0,   4, 207, 251,  32,   4, 251,  69, 222,  16, 205,   0,   1, 249,  15, 128,   0,  11, 209, 246,   0,   0, 174,  15, 128,   0,  11, 208, 205,   0,   1, 249,   4, 251,  85, 222,  16,   4, 207, 251,  32, /* ö */
  8,  12,   3,   5, 243,  79,  64,   3, 146,  41,  32,   0,   0,   0,   0, 172,   0,   0, 203, 172,   0,   0, 203, 172,   0,   0, 203, 172,   0,   0, 203, 172,   0,   0, 203, 157,   0,   0, 203, 126,   0,   1, 251,  47, 129,  43, 251,   5, 223, 213, 203, /* ü */
 11,  15,   0,   0,   8,  96, 119,   0,   0,   0, 219,  12, 192,   0,   0,   0,   0,   0,   0,   0,   0,   9, 248,   0,   0,   0,   0, 255, 224,   0,   0,   0,  95, 111,  64,   0,   0,  11, 208, 234,   0,   0,   1, 248,   8, 241,   0,   0, 127,  32,  63,  96,   0,  13, 208,   0, 220,   0,   3, 248,  17,  25, 242,   0, 159, 255, 255, 255, 128,  14, 196,  68,  68, 206,   5, 245,   0,   0,   6, 244, 191,   0,   0,   0,  15,  10, /* Ä */
 12,  15,   0,   0,   0, 249,  15, 160,   0,   0,   0, 149,   9,  80,   0,   0,   0,   0,   0,   0,   0,   0,   4, 190, 253, 145,   0,   0, 127, 198,  88, 238,  32,   3, 250,   0,   0,  47, 208,  10, 241,   0,   0,   7, 244,  15, 176,   0,   0,   2, 248,  15, 144,   0,   0,   0, 250,  15, 144,   0,   0,   0, 250,  15, 176,   0,   0,   2, 248,  11, 241,   0,   0,   7, 244,   3, 250,   0,   0,  46, 208,   0, 127, 198,  88, 238,  32,   0,   4, 190, 253, 145,   0, /* Ö */
 10,  15,   0,   0, 127,  38, 243,   0,   0,  73,  19, 145,   0,   0,   0,   0,   0,   0, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 159,   0,   0,   4, 245, 143,  16,   0,   6, 243,  79, 112,   0,  11, 224,  11, 249,  86, 191,  96,   0, 141, 255, 197,   0, /* Ü */
  9,  12,   3,   3, 190, 235,  32,   1, 251,  68, 205,   0, 111,  16,   2, 243,   8, 224,   9, 233,  32, 142,   5, 242,   0,   8, 224, 127,  16,   0, 142,   2, 253,  48,   8, 224,   2, 207,  96, 142,   0,   0, 143,  40, 224,   0,   2, 244, 142,  23,  68, 191,  24, 225, 207, 236,  48, /* ß */
};
