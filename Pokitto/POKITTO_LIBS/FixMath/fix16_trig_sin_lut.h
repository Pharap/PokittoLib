#ifndef __fix16_trig_sin_lut_h__
#define __fix16_trig_sin_lut_h__

static const uint32_t _fix16_sin_lut_count = 256;
static uint16_t _fix16_sin_lut[256] = {
0x0,0x192,0x324,0x4b6,0x648,0x7da,0x96c,0xafd,0xc8f,0xe21,0xfb2,0x1143,0x12d5,0x1465,0x15f6,0x1787,
0x1917,0x1aa7,0x1c37,0x1dc6,0x1f56,0x20e5,0x2273,0x2402,0x258f,0x271d,0x28aa,0x2a37,0x2bc3,0x2d4f,0x2edb,0x3066,
0x31f1,0x337b,0x3505,0x368e,0x3816,0x399e,0x3b26,0x3cad,0x3e33,0x3fb9,0x413e,0x42c3,0x4447,0x45ca,0x474c,0x48ce,
0x4a4f,0x4bd0,0x4d4f,0x4ece,0x504d,0x51ca,0x5347,0x54c3,0x563e,0x57b8,0x5931,0x5aaa,0x5c21,0x5d98,0x5f0e,0x6083,
0x61f7,0x636a,0x64dc,0x664d,0x67bd,0x692c,0x6a9a,0x6c07,0x6d73,0x6ede,0x7048,0x71b1,0x7319,0x747f,0x75e5,0x7749,
0x78ac,0x7a0f,0x7b6f,0x7ccf,0x7e2e,0x7f8b,0x80e7,0x8242,0x839b,0x84f3,0x864a,0x87a0,0x88f5,0x8a48,0x8b99,0x8cea,
0x8e39,0x8f86,0x90d3,0x921e,0x9367,0x94af,0x95f6,0x973b,0x987f,0x99c1,0x9b02,0x9c41,0x9d7f,0x9ebb,0x9ff6,0xa12f,
0xa266,0xa39d,0xa4d1,0xa604,0xa735,0xa865,0xa993,0xaabf,0xabea,0xad13,0xae3b,0xaf60,0xb085,0xb1a7,0xb2c8,0xb3e7,
0xb504,0xb61f,0xb739,0xb851,0xb967,0xba7b,0xbb8e,0xbc9f,0xbdae,0xbebb,0xbfc6,0xc0d0,0xc1d7,0xc2dd,0xc3e1,0xc4e3,
0xc5e3,0xc6e1,0xc7dd,0xc8d7,0xc9d0,0xcac6,0xcbbb,0xccad,0xcd9e,0xce8c,0xcf79,0xd063,0xd14c,0xd232,0xd317,0xd3f9,
0xd4da,0xd5b8,0xd695,0xd76f,0xd847,0xd91d,0xd9f1,0xdac3,0xdb93,0xdc60,0xdd2c,0xddf5,0xdebd,0xdf82,0xe045,0xe106,
0xe1c4,0xe281,0xe33b,0xe3f3,0xe4a9,0xe55d,0xe60e,0xe6bd,0xe76a,0xe815,0xe8be,0xe964,0xea08,0xeaaa,0xeb4a,0xebe7,
0xec82,0xed1b,0xedb1,0xee45,0xeed7,0xef67,0xeff4,0xf07f,0xf108,0xf18e,0xf212,0xf294,0xf313,0xf390,0xf40a,0xf483,
0xf4f9,0xf56c,0xf5dd,0xf64c,0xf6b9,0xf723,0xf78a,0xf7f0,0xf852,0xf8b3,0xf911,0xf96d,0xf9c6,0xfa1d,0xfa72,0xfac4,
0xfb13,0xfb61,0xfbab,0xfbf4,0xfc3a,0xfc7d,0xfcbe,0xfcfd,0xfd39,0xfd73,0xfdaa,0xfddf,0xfe12,0xfe42,0xfe6f,0xfe9a,
0xfec3,0xfee9,0xff0d,0xff2e,0xff4d,0xff69,0xff83,0xff9b,0xffb0,0xffc2,0xffd2,0xffe0,0xffeb,0xfff3,0xfffa,0xfffd
};

#endif