const char screeninit[]={
0xc0,0x01,0x0c,0xf1,0x01,0x00,0x00,0xea,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0xe1,0x00,0xc0,0x9f,0xe5,0x1c,0xff,0x2f,0xe1,0x21,0xfc,0xff,0x24,0x00,0x00,0x00,0x00,0x30
,0xb5,0x85,0xb0,0x69,0x46,0x7b,0x4a,0x31,0xca,0x31,0xc1,0x12,0x68,0x7a,0x48,0x0a,0x60,0x7a,0x49,0x7a,0x4a,0x12,0x68,0x08,0x60,0x01,0x20,0x6b,0x46,0x79,0x49,0x79
,0x4c,0x08,0x60,0x79,0x49,0x25,0x68,0x29,0x40,0x21,0x60,0x92,0x00,0xd4,0x58,0x77,0x49,0x0c,0x60,0xd2,0x58,0x77,0x4b,0x1a,0x60,0x77,0x4b,0x77,0x4a,0x13,0x60,0x77
,0x4a,0x13,0x60,0xe1,0x22,0x77,0x4b,0x52,0x00,0x1a,0x60,0x76,0x4b,0xf1,0x3a,0x1a,0x60,0xc2,0x23,0x75,0x49,0xff,0x33,0x0b,0x60,0x75,0x49,0x0b,0x60,0x00,0x23,0xcf
,0x24,0x74,0x49,0x0b,0x60,0x74,0x49,0x0c,0x60,0x74,0x49,0x0a,0x60,0x74,0x49,0x74,0x4a,0x11,0x60,0x80,0x21,0x74,0x4a,0x49,0x02,0x11,0x60,0x9e,0x21,0x73,0x4a,0xff
,0x31,0x11,0x60,0x72,0x4a,0x9c,0x39,0xff,0x39,0x11,0x60,0xc9,0x22,0x71,0x4c,0x52,0x00,0x22,0x60,0x70,0x4c,0x22,0x60,0x70,0x4c,0x22,0x60,0x70,0x4a,0x10,0x60,0x70
,0x4a,0x11,0x60,0x70,0x49,0x71,0x4a,0x11,0x60,0x71,0x4a,0x13,0x60,0x71,0x4a,0x71,0x49,0x13,0x60,0x71,0x4a,0x11,0x60,0x71,0x49,0x72,0x4a,0x11,0x60,0x72,0x49,0x72
,0x4a,0x11,0x60,0x72,0x49,0x73,0x4a,0x11,0x60,0x73,0x49,0x73,0x4a,0x11,0x60,0x73,0x49,0x74,0x4a,0x11,0x60,0xb4,0x21,0x73,0x4a,0x13,0x60,0x73,0x4a,0x89,0x00,0x11
,0x60,0x73,0x4a,0x73,0x49,0x13,0x60,0x73,0x4a,0x74,0x48,0x84,0x46,0x0b,0x60,0x63,0x44,0x93,0x42,0xf9,0xd1,0xe1,0x22,0x71,0x4b,0x52,0x00,0x1a,0x60,0xd1,0x23,0x70
,0x4a,0x13,0x60,0xc2,0x22,0x70,0x49,0xff,0x32,0x0a,0x60,0x6f,0x49,0x0a,0x60,0xcd,0x21,0x6f,0x4a,0x11,0x60,0x6f,0x4a,0x02,0x31,0x11,0x60,0x6e,0x4a,0x13,0x60,0x47
,0x4a,0x6e,0x4b,0x1a,0x60,0x80,0x22,0x6d,0x4b,0x52,0x02,0x1a,0x60,0x9e,0x22,0x6c,0x4b,0xff,0x32,0x1a,0x60,0x52,0x23,0x6b,0x4a,0x13,0x60,0xc9,0x22,0x6b,0x49,0x52
,0x00,0x0a,0x60,0x6a,0x49,0x0a,0x60,0x4f,0x21,0x6a,0x4a,0x11,0x60,0x6a,0x4a,0x01,0x31,0x11,0x60,0x69,0x4a,0x13,0x60,0x69,0x4a,0x6a,0x4b,0x1a,0x60,0x00,0x23,0x69
,0x4a,0x13,0x60,0x69,0x4a,0x3f,0x39,0x11,0x60,0x69,0x49,0x69,0x4a,0x11,0x60,0x43,0x49,0x69,0x4a,0x11,0x60,0x69,0x49,0x69,0x4a,0x11,0x60,0x69,0x49,0x6a,0x4a,0x11
,0x60,0x6a,0x49,0x6a,0x4a,0x11,0x60,0x45,0x49,0x6a,0x4a,0x11,0x60,0xb4,0x21,0x69,0x4a,0x13,0x60,0x69,0x4a,0x89,0x00,0x11,0x60,0x69,0x4a,0x69,0x49,0x13,0x60,0x45
,0x4a,0x46,0x48,0x84,0x46,0x0b,0x60,0x63,0x44,0x93,0x42,0xf9,0xd1,0x38,0x4b,0x38,0x4a,0x13,0x60,0x64,0x4a,0x13,0x60,0x64,0x4a,0x13,0x60,0x64,0x4a,0x5a,0x49,0x13
,0x60,0x58,0x4a,0x0a,0x60,0x63,0x49,0x0a,0x60,0x63,0x49,0x0b,0x60,0x63,0x49,0x0b,0x60,0x63,0x4b,0x1a,0x60,0x00,0x23,0x62,0x4a,0x13,0x60,0x13,0x68,0x00,0x2b,0xfc
,0xd0,0x60,0x4b,0x1b,0x68,0x00,0xf0,0xbf,0xf8,0x05,0xb0,0x30,0xbc,0x01,0xbc,0x00,0x47,0xc0,0x46,0x8c,0xff,0xff,0x24,0x7f,0x00,0x01,0x00,0x00,0x12,0x14,0x10,0x08
,0xfc,0xff,0x24,0x14,0x20,0x20,0x10,0x0c,0x20,0x20,0x10,0xfe,0xff,0xfe,0xff,0x40,0x22,0x20,0x10,0x40,0x2a,0x20,0x10,0x3e,0x02,0x01,0x00,0x44,0x22,0x20,0x10,0x44
,0x2a,0x20,0x10,0x00,0x04,0x40,0x10,0x04,0x04,0x40,0x10,0x08,0x04,0x40,0x10,0x0c,0x04,0x40,0x10,0x10,0x04,0x40,0x10,0x14,0x04,0x40,0x10,0x18,0x04,0x40,0x10,0xc1
,0x01,0xc5,0x01,0x1c,0x04,0x40,0x10,0x20,0x04,0x40,0x10,0x24,0x04,0x40,0x10,0x28,0x04,0x40,0x10,0x2c,0x04,0x40,0x10,0x30,0x04,0x40,0x10,0x34,0x04,0x40,0x10,0x38
,0x04,0x40,0x10,0x3c,0x04,0x40,0x10,0x92,0x01,0x96,0x01,0x40,0x04,0x40,0x10,0x44,0x04,0x40,0x10,0x48,0x04,0x40,0x10,0x90,0x01,0xf0,0x00,0x5c,0x04,0x40,0x10,0xd1
,0x00,0xc1,0x01,0x60,0x04,0x40,0x10,0x02,0x00,0x92,0x01,0x64,0x04,0x40,0x10,0x00,0x00,0x30,0x18,0x68,0x04,0x40,0x10,0x41,0x03,0x08,0x00,0x70,0x04,0x40,0x10,0x01
,0x05,0x01,0x00,0x74,0x04,0x40,0x10,0x78,0x04,0x40,0x10,0x90,0x04,0x40,0x10,0x9c,0x04,0x40,0x10,0x84,0x04,0x40,0x10,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00
,0x05,0x40,0x10,0x04,0x05,0x40,0x10,0x08,0x05,0x40,0x10,0x0c,0x05,0x40,0x10,0x10,0x05,0x40,0x10,0x14,0x05,0x40,0x10,0x18,0x05,0x40,0x10,0x1c,0x05,0x40,0x10,0x20
,0x05,0x40,0x10,0x24,0x05,0x40,0x10,0x28,0x05,0x40,0x10,0x2c,0x05,0x40,0x10,0x30,0x05,0x40,0x10,0x34,0x05,0x40,0x10,0x38,0x05,0x40,0x10,0x3c,0x05,0x40,0x10,0x94
,0x01,0x98,0x01,0x40,0x05,0x40,0x10,0x44,0x05,0x40,0x10,0x48,0x05,0x40,0x10,0x40,0x01,0xf0,0x00,0x5c,0x05,0x40,0x10,0x60,0x05,0x40,0x10,0x52,0x00,0x92,0x01,0x64
,0x05,0x40,0x10,0x00,0x65,0x34,0x18,0x68,0x05,0x40,0x10,0x01,0x03,0x08,0x00,0x70,0x05,0x40,0x10,0x74,0x05,0x40,0x10,0x78,0x05,0x40,0x10,0x90,0x05,0x40,0x10,0x9c
,0x05,0x40,0x10,0x84,0x05,0x40,0x10,0x6c,0x04,0x40,0x10,0x94,0x04,0x40,0x10,0x98,0x04,0x40,0x10,0x6c,0x05,0x40,0x10,0x00,0xfe,0xff,0x23,0x04,0xfe,0xff,0x23,0x08
,0xfe,0xff,0x23,0xf8,0xff,0xff,0x1f,0x18,0x47,0xc0,0x46,0x5f,0x00,0x00,0x00,0x4c,0x00,0x00,0x00,0x39,0x00,0x00,0x00,0x26,0x00,0x00,0x00};
const int screeninit_size=924;