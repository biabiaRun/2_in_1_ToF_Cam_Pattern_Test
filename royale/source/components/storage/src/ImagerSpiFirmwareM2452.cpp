/****************************************************************************\
 * Copyright (C) 2017 Infineon Technologies
 *
 * THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 \****************************************************************************/

#include <storage/ImagerSpiFirmwareM2452.hpp>

const std::vector<uint16_t> royale::storage::imagerspi_m2452::SUPPORTED_DESIGN_STEPS =
{
    0x0b11,
    0x0b12,
};

const std::vector<uint16_t> royale::storage::imagerspi_m2452::ImagerSpiFirmwareM2452 =
{
    0x00e3,
    0x0ed8,
    0x00e0,
    0x0604,
    0x0a01,
    0x0881,
    0x0dc3,
    0x080f,
    0x0188,
    0x0a02,
    0x0dc3,
    0x000e,
    0x0986,
    0x00e0,
    0x0f51,
    0x00e0,
    0x0613,
    0x00e0,
    0x071b,
    0x0a16,
    0x0890,
    0x0442,
    0x0a02,
    0x00b0,
    0x0c40,
    0x0040,
    0x0040,
    0x00e0,
    0x0fcb,
    0x0881,
    0x0d41,
    0x0848,
    0x083c,
    0x0a20,
    0x080f,
    0x09a8,
    0x0d41,
    0x0848,
    0x083c,
    0x0a02,
    0x080f,
    0x099e,
    0x0d41,
    0x0848,
    0x083c,
    0x0203,
    0x080f,
    0x0994,
    0x0d41,
    0x0848,
    0x083c,
    0x029f,
    0x080f,
    0x098a,
    0x0d41,
    0x0848,
    0x083c,
    0x0205,
    0x000e,
    0x0992,
    0x00e3,
    0x0f8a,
    0x00e0,
    0x0e42,
    0x08e2,
    0x07f0,
    0x00e0,
    0x0646,
    0x08e2,
    0x0f79,
    0x00e0,
    0x064a,
    0x08e1,
    0x0fab,
    0x00e0,
    0x0e4e,
    0x08e1,
    0x0f10,
    0x08e1,
    0x0f04,
    0x0040,
    0x00e0,
    0x0fcb,
    0x0881,
    0x0d41,
    0x0848,
    0x083c,
    0x0a02,
    0x080f,
    0x01bb,
    0x0d41,
    0x0848,
    0x083c,
    0x0203,
    0x000e,
    0x09b3,
    0x0200,
    0x0398,
    0x0890,
    0x0450,
    0x0551,
    0x0881,
    0x0444,
    0x0a01,
    0x05c4,
    0x0812,
    0x0008,
    0x09f4,
    0x0a01,
    0x0398,
    0x0890,
    0x0450,
    0x0551,
    0x0881,
    0x0c45,
    0x0a01,
    0x0dc5,
    0x0812,
    0x0008,
    0x0195,
    0x08e2,
    0x0750,
    0x08e2,
    0x0f79,
    0x0200,
    0x0881,
    0x0444,
    0x0398,
    0x0890,
    0x0450,
    0x0afe,
    0x0bff,
    0x0dd1,
    0x0812,
    0x0881,
    0x05c4,
    0x0013,
    0x0890,
    0x0c51,
    0x00e3,
    0x0728,
    0x0a01,
    0x0881,
    0x0dc5,
    0x0812,
    0x0008,
    0x014d,
    0x00e0,
    0x06c8,
    0x0200,
    0x0398,
    0x0890,
    0x0450,
    0x0551,
    0x0881,
    0x0444,
    0x0a01,
    0x05c4,
    0x0812,
    0x0008,
    0x09f4,
    0x0a01,
    0x0398,
    0x0890,
    0x0450,
    0x0551,
    0x0881,
    0x0c45,
    0x0a01,
    0x0dc5,
    0x0812,
    0x0008,
    0x0195,
    0x08e2,
    0x0750,
    0x08e1,
    0x0fab,
    0x0200,
    0x0881,
    0x0444,
    0x0398,
    0x0890,
    0x0450,
    0x0afe,
    0x0bff,
    0x0dd1,
    0x0812,
    0x0881,
    0x05c4,
    0x0013,
    0x0890,
    0x0c51,
    0x00e3,
    0x0728,
    0x0a01,
    0x0881,
    0x0dc5,
    0x0812,
    0x0008,
    0x014d,
    0x08e1,
    0x0f04,
    0x0040,
    0x0a1f,
    0x0bb4,
    0x0890,
    0x0450,
    0x0200,
    0x0c51,
    0x0a01,
    0x088e,
    0x0c45,
    0x0200,
    0x0444,
    0x0a08,
    0x0890,
    0x0c5d,
    0x0214,
    0x0442,
    0x0a13,
    0x0313,
    0x08a0,
    0x045c,
    0x0a15,
    0x0315,
    0x0c5d,
    0x0a13,
    0x0313,
    0x0c5e,
    0x045f,
    0x0460,
    0x0a38,
    0x0b63,
    0x0c54,
    0x0304,
    0x0455,
    0x0221,
    0x0304,
    0x0456,
    0x0c57,
    0x0c58,
    0x0211,
    0x0890,
    0x0442,
    0x0a01,
    0x08a0,
    0x0c46,
    0x0200,
    0x0c49,
    0x02ff,
    0x03ef,
    0x0448,
    0x0afd,
    0x03ef,
    0x0c4a,
    0x0200,
    0x0c4c,
    0x0310,
    0x044e,
    0x0040,
    0x0214,
    0x0890,
    0x0442,
    0x0a13,
    0x0313,
    0x08a0,
    0x045c,
    0x0c5d,
    0x0211,
    0x0890,
    0x0442,
    0x0040,
    0x0a7c,
    0x0301,
    0x088e,
    0x0444,
    0x0a04,
    0x0448,
    0x0a01,
    0x0c2a,
    0x023f,
    0x042b,
    0x0a7c,
    0x0301,
    0x0c2c,
    0x0a02,
    0x042d,
    0x08c5,
    0x0f8c,
    0x0a15,
    0x0b88,
    0x0890,
    0x0450,
    0x0afe,
    0x0bff,
    0x0dd1,
    0x0812,
    0x0c51,
    0x0a15,
    0x0b88,
    0x0450,
    0x0205,
    0x0dd1,
    0x0013,
    0x0c51,
    0x0206,
    0x0881,
    0x0c46,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x08e1,
    0x07a0,
    0x0206,
    0x0c37,
    0x00e3,
    0x0fa4,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x0881,
    0x0d41,
    0x088e,
    0x0c49,
    0x0200,
    0x0b05,
    0x0881,
    0x0441,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x00e3,
    0x0765,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x002f,
    0x0800,
    0x0a08,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x0248,
    0x0bee,
    0x088e,
    0x0444,
    0x0a01,
    0x0448,
    0x0c2a,
    0x023f,
    0x042b,
    0x0248,
    0x0bee,
    0x0c2c,
    0x0a02,
    0x042d,
    0x08c5,
    0x0f8c,
    0x0a15,
    0x0b88,
    0x0890,
    0x0450,
    0x0afe,
    0x0bff,
    0x0dd1,
    0x0812,
    0x0c51,
    0x0a15,
    0x0b88,
    0x0450,
    0x0205,
    0x0dd1,
    0x0013,
    0x0c51,
    0x088e,
    0x0549,
    0x0881,
    0x0441,
    0x0a01,
    0x0c37,
    0x0a02,
    0x0c34,
    0x08e1,
    0x07a0,
    0x08e4,
    0x0700,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x002f,
    0x0800,
    0x0881,
    0x0d41,
    0x088e,
    0x0c49,
    0x0200,
    0x0b05,
    0x0881,
    0x0441,
    0x00e3,
    0x0f8a,
    0x088e,
    0x0549,
    0x0881,
    0x0441,
    0x0040,
    0x0214,
    0x0890,
    0x0442,
    0x0a15,
    0x0313,
    0x08a0,
    0x045c,
    0x0211,
    0x0890,
    0x0442,
    0x0040,
    0x0a7c,
    0x0301,
    0x088e,
    0x0444,
    0x0a04,
    0x0448,
    0x0a01,
    0x0c2a,
    0x023f,
    0x042b,
    0x0a7c,
    0x0301,
    0x0c2c,
    0x0a02,
    0x042d,
    0x08c5,
    0x0f8c,
    0x0a15,
    0x0b88,
    0x0890,
    0x0450,
    0x0afe,
    0x0bff,
    0x0dd1,
    0x0812,
    0x0c51,
    0x0a15,
    0x0b88,
    0x0450,
    0x0205,
    0x0dd1,
    0x0013,
    0x0c51,
    0x0206,
    0x0881,
    0x0c46,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x08e1,
    0x07a0,
    0x0206,
    0x0c37,
    0x00e3,
    0x0fa4,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x0881,
    0x0d41,
    0x088e,
    0x0c49,
    0x0200,
    0x0b05,
    0x0881,
    0x0441,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x00e3,
    0x0765,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x002f,
    0x0800,
    0x0a08,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x0248,
    0x0bee,
    0x088e,
    0x0444,
    0x0a02,
    0x0448,
    0x0a01,
    0x0c2a,
    0x023f,
    0x042b,
    0x0248,
    0x0bee,
    0x0c2c,
    0x0a02,
    0x042d,
    0x08c5,
    0x0f8c,
    0x0a15,
    0x0b88,
    0x0890,
    0x0450,
    0x0afe,
    0x0bff,
    0x0dd1,
    0x0812,
    0x0c51,
    0x0a15,
    0x0b88,
    0x0450,
    0x0205,
    0x0dd1,
    0x0013,
    0x0c51,
    0x088e,
    0x0549,
    0x0881,
    0x0441,
    0x0a01,
    0x0c37,
    0x0a02,
    0x0c34,
    0x08e1,
    0x07a0,
    0x08e4,
    0x0700,
    0x0200,
    0x0c37,
    0x0881,
    0x0540,
    0x0848,
    0x0019,
    0x0c34,
    0x08e4,
    0x0f5b,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x002f,
    0x0800,
    0x0881,
    0x0d41,
    0x088e,
    0x0c49,
    0x0200,
    0x0b05,
    0x0881,
    0x0441,
    0x00e3,
    0x0f8a,
    0x088e,
    0x0549,
    0x0881,
    0x0441,
    0x0040,
    0x0214,
    0x0890,
    0x0442,
    0x0a13,
    0x0b12,
    0x08a0,
    0x045c,
    0x0211,
    0x0890,
    0x0442,
    0x0040,
    0x0a01,
    0x0881,
    0x0dc0,
    0x0812,
    0x0008,
    0x018d,
    0x0a1f,
    0x0bb4,
    0x0890,
    0x0450,
    0x0a08,
    0x0dd1,
    0x0013,
    0x0c51,
    0x0a16,
    0x0442,
    0x0a02,
    0x00b0,
    0x0c40,
    0x0200,
    0x0380,
    0x0881,
    0x0dc0,
    0x0038,
    0x0b81,
    0x080c,
    0x018d,
    0x0a1f,
    0x0bb4,
    0x0890,
    0x0450,
    0x0a10,
    0x0dd1,
    0x0013,
    0x0c51,
    0x0a16,
    0x0442,
    0x0a02,
    0x00b0,
    0x0c40,
    0x0040,
    0x0200,
    0x088e,
    0x0447,
    0x0d47,
    0x0890,
    0x0450,
    0x0200,
    0x0c51,
    0x088e,
    0x0d47,
    0x0043,
    0x0848,
    0x0051,
    0x0447,
    0x0200,
    0x0380,
    0x05c7,
    0x0038,
    0x02ff,
    0x0380,
    0x080c,
    0x01ed,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x08e1,
    0x07a0,
    0x0a01,
    0x0c37,
    0x0a02,
    0x0c34,
    0x08e4,
    0x0700,
    0x08e2,
    0x0f45,
    0x0200,
    0x0c37,
    0x0881,
    0x0540,
    0x0848,
    0x0019,
    0x0c34,
    0x08e4,
    0x0ff2,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x0040,
    0x05b3,
    0x0a40,
    0x0811,
    0x085f,
    0x0c04,
    0x0200,
    0x0c02,
    0x0c32,
    0x0380,
    0x088e,
    0x0dc6,
    0x0038,
    0x0803,
    0x0db2,
    0x0818,
    0x0002,
    0x080c,
    0x019c,
    0x0a01,
    0x0d84,
    0x0812,
    0x0d82,
    0x0013,
    0x0c02,
    0x0502,
    0x081d,
    0x0c02,
    0x0504,
    0x0848,
    0x0019,
    0x0c04,
    0x0532,
    0x0043,
    0x0848,
    0x0051,
    0x0c32,
    0x0200,
    0x0380,
    0x0dc6,
    0x0038,
    0x0803,
    0x0db2,
    0x0818,
    0x0002,
    0x000b,
    0x01e4,
    0x0a01,
    0x0d84,
    0x0812,
    0x0d82,
    0x0013,
    0x0c02,
    0x0502,
    0x0c04,
    0x0a01,
    0x0d84,
    0x0032,
    0x0803,
    0x0afe,
    0x0bff,
    0x0890,
    0x0ddd,
    0x0812,
    0x0002,
    0x0013,
    0x0c5d,
    0x0040,
    0x0881,
    0x0d41,
    0x0848,
    0x001c,
    0x0441,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x08e1,
    0x07a0,
    0x0a01,
    0x0c37,
    0x00e3,
    0x0fa4,
    0x08e2,
    0x0f45,
    0x00e5,
    0x073a,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x0040,
    0x0a04,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x08a0,
    0x054f,
    0x0c07,
    0x0848,
    0x081b,
    0x083c,
    0x0a01,
    0x0032,
    0x0d05,
    0x081d,
    0x0013,
    0x0405,
    0x0a04,
    0x0890,
    0x0ddd,
    0x0038,
    0x0afe,
    0x0bff,
    0x0812,
    0x0c5d,
    0x0200,
    0x0310,
    0x08a0,
    0x044e,
    0x0040,
    0x02ff,
    0x0881,
    0x05c1,
    0x0812,
    0x088e,
    0x0c40,
    0x0881,
    0x0d42,
    0x088e,
    0x0441,
    0x0881,
    0x0540,
    0x088e,
    0x0c43,
    0x02ff,
    0x0bff,
    0x0442,
    0x0200,
    0x0380,
    0x0dc3,
    0x0038,
    0x0803,
    0x05c1,
    0x02ff,
    0x0bff,
    0x0848,
    0x0830,
    0x0200,
    0x0380,
    0x0818,
    0x0002,
    0x080c,
    0x0985,
    0x0540,
    0x0043,
    0x0848,
    0x0051,
    0x0c40,
    0x0dc3,
    0x0d41,
    0x0848,
    0x0811,
    0x0441,
    0x02ff,
    0x0dc0,
    0x0032,
    0x0803,
    0x0200,
    0x0bff,
    0x0881,
    0x05c1,
    0x0812,
    0x0002,
    0x0013,
    0x0441,
    0x0d42,
    0x088e,
    0x0d41,
    0x0881,
    0x0442,
    0x0040,
    0x0881,
    0x0d41,
    0x0848,
    0x001c,
    0x0441,
    0x0a01,
    0x0c37,
    0x00e3,
    0x0fa4,
    0x08e2,
    0x0f45,
    0x00e5,
    0x0777,
    0x0040,
    0x0a04,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x0504,
    0x0848,
    0x0019,
    0x0c04,
    0x0a01,
    0x0d84,
    0x0032,
    0x0803,
    0x0a04,
    0x0ddd,
    0x0038,
    0x0afe,
    0x0bff,
    0x0812,
    0x0002,
    0x0013,
    0x0c5d,
    0x0040,
    0x0881,
    0x0d41,
    0x0848,
    0x001c,
    0x0441,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x08e1,
    0x07a0,
    0x0a01,
    0x0c37,
    0x00e3,
    0x0fa4,
    0x08e2,
    0x0f45,
    0x00e5,
    0x07bd,
    0x0a08,
    0x0890,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x0040,
    0x0a07,
    0x088e,
    0x0c46,
    0x0537,
    0x0433,
    0x08e2,
    0x0fad,
    0x0200,
    0x0c32,
    0x0380,
    0x0db2,
    0x0038,
    0x0a07,
    0x0380,
    0x000b,
    0x01a3,
    0x0890,
    0x0a04,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x0504,
    0x0848,
    0x0019,
    0x0c04,
    0x0a01,
    0x0d84,
    0x0032,
    0x0803,
    0x0a04,
    0x0ddd,
    0x0038,
    0x0afe,
    0x0bff,
    0x0812,
    0x0002,
    0x0013,
    0x0c5d,
    0x0532,
    0x0043,
    0x0848,
    0x0051,
    0x0c32,
    0x0200,
    0x0380,
    0x0db2,
    0x0038,
    0x0a07,
    0x0380,
    0x080c,
    0x01de,
    0x0040,
    0x0890,
    0x0d42,
    0x0c08,
    0x0a01,
    0x0409,
    0x0211,
    0x0442,
    0x02ff,
    0x0bff,
    0x08a0,
    0x044e,
    0x0508,
    0x0890,
    0x0442,
    0x0040,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0800,
    0x0790,
    0x0537,
    0x0433,
    0x0200,
    0x0380,
    0x05b3,
    0x0038,
    0x0803,
    0x0db4,
    0x0537,
    0x0848,
    0x0031,
    0x0200,
    0x0380,
    0x0818,
    0x0002,
    0x000d,
    0x0902,
    0x08e4,
    0x0e5a,
    0x020f,
    0x088e,
    0x0c46,
    0x08e2,
    0x0fad,
    0x0200,
    0x0c32,
    0x0380,
    0x0db2,
    0x0038,
    0x020f,
    0x0380,
    0x000b,
    0x01a3,
    0x0890,
    0x0a04,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x0504,
    0x0848,
    0x0019,
    0x0c04,
    0x0a01,
    0x0d84,
    0x0032,
    0x0803,
    0x0a04,
    0x0ddd,
    0x0038,
    0x0afe,
    0x0bff,
    0x0812,
    0x0002,
    0x0013,
    0x0c5d,
    0x0532,
    0x0043,
    0x0848,
    0x0051,
    0x0c32,
    0x0200,
    0x0380,
    0x0db2,
    0x0038,
    0x020f,
    0x0380,
    0x080c,
    0x01de,
    0x0d33,
    0x0043,
    0x0848,
    0x0051,
    0x0433,
    0x0200,
    0x0380,
    0x05b3,
    0x0038,
    0x0803,
    0x0db4,
    0x0537,
    0x0848,
    0x0031,
    0x0200,
    0x0380,
    0x0818,
    0x0002,
    0x080a,
    0x0902,
    0x08e4,
    0x0613,
    0x0040,
    0x0537,
    0x0433,
    0x0200,
    0x0380,
    0x05b3,
    0x0038,
    0x0803,
    0x0db4,
    0x0537,
    0x0848,
    0x0031,
    0x0200,
    0x0380,
    0x0818,
    0x0002,
    0x000d,
    0x0902,
    0x08e4,
    0x06f1,
    0x0d33,
    0x0890,
    0x0450,
    0x0551,
    0x0c04,
    0x0200,
    0x0c02,
    0x0c32,
    0x0380,
    0x088e,
    0x0dc6,
    0x0038,
    0x0803,
    0x0db2,
    0x0818,
    0x0002,
    0x080c,
    0x019c,
    0x0a01,
    0x0d84,
    0x0812,
    0x0d82,
    0x0013,
    0x0c02,
    0x0502,
    0x081d,
    0x0c02,
    0x0504,
    0x0848,
    0x0019,
    0x0c04,
    0x0532,
    0x0043,
    0x0848,
    0x0051,
    0x0c32,
    0x0200,
    0x0380,
    0x0dc6,
    0x0038,
    0x0803,
    0x0db2,
    0x0818,
    0x0002,
    0x000b,
    0x01e4,
    0x0a01,
    0x0d84,
    0x0812,
    0x0d82,
    0x0013,
    0x0c02,
    0x0502,
    0x0c04,
    0x0a01,
    0x0d84,
    0x0032,
    0x0803,
    0x0afe,
    0x0bff,
    0x0890,
    0x0ddd,
    0x0812,
    0x0002,
    0x0013,
    0x0c5d,
    0x0200,
    0x0c32,
    0x0380,
    0x0db2,
    0x0038,
    0x020f,
    0x0380,
    0x000b,
    0x09a2,
    0x0a04,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x0504,
    0x0848,
    0x0019,
    0x0c04,
    0x0a01,
    0x0d84,
    0x0032,
    0x0803,
    0x0a04,
    0x0ddd,
    0x0038,
    0x0afe,
    0x0bff,
    0x0812,
    0x0002,
    0x0013,
    0x0c5d,
    0x0532,
    0x0043,
    0x0848,
    0x0051,
    0x0c32,
    0x0200,
    0x0380,
    0x0db2,
    0x0038,
    0x020f,
    0x0380,
    0x080c,
    0x01de,
    0x0d33,
    0x0043,
    0x0848,
    0x0051,
    0x0433,
    0x0200,
    0x0380,
    0x05b3,
    0x0038,
    0x0803,
    0x0db4,
    0x0537,
    0x0848,
    0x0031,
    0x0200,
    0x0380,
    0x0818,
    0x0002,
    0x080a,
    0x0902,
    0x08e4,
    0x066e,
    0x0040,
    0x0200,
    0x0310,
    0x08a0,
    0x044e,
    0x0537,
    0x0433,
    0x0200,
    0x0380,
    0x05b3,
    0x0038,
    0x0803,
    0x0db4,
    0x0537,
    0x0848,
    0x0031,
    0x0200,
    0x0380,
    0x0818,
    0x0002,
    0x000d,
    0x01b2,
    0x0200,
    0x0405,
    0x0c32,
    0x0380,
    0x0db2,
    0x0038,
    0x020f,
    0x0380,
    0x000b,
    0x098f,
    0x00e3,
    0x070a,
    0x0532,
    0x0043,
    0x0848,
    0x0051,
    0x0c32,
    0x0200,
    0x0380,
    0x0db2,
    0x0038,
    0x020f,
    0x0380,
    0x080c,
    0x09f1,
    0x0d33,
    0x0890,
    0x0450,
    0x0d05,
    0x0c51,
    0x0d33,
    0x0043,
    0x0848,
    0x0051,
    0x0433,
    0x0200,
    0x0380,
    0x05b3,
    0x0038,
    0x0803,
    0x0db4,
    0x0537,
    0x0848,
    0x0031,
    0x0200,
    0x0380,
    0x0818,
    0x0002,
    0x080a,
    0x09ce,
    0x0040,
    0x0200,
    0x0405,
    0x0c32,
    0x0380,
    0x0db2,
    0x0038,
    0x020f,
    0x0380,
    0x000b,
    0x098f,
    0x00e3,
    0x070a,
    0x0532,
    0x0043,
    0x0848,
    0x0051,
    0x0c32,
    0x0200,
    0x0380,
    0x0db2,
    0x0038,
    0x020f,
    0x0380,
    0x080c,
    0x09f1,
    0x0200,
    0x0890,
    0x0450,
    0x0d05,
    0x0c51,
    0x0200,
    0x0405,
    0x0c32,
    0x0380,
    0x0db2,
    0x0038,
    0x0a07,
    0x0380,
    0x000b,
    0x098f,
    0x00e3,
    0x070a,
    0x0532,
    0x0043,
    0x0848,
    0x0051,
    0x0c32,
    0x0200,
    0x0380,
    0x0db2,
    0x0038,
    0x0a07,
    0x0380,
    0x080c,
    0x09f1,
    0x0a01,
    0x0890,
    0x0450,
    0x0d05,
    0x0c51,
    0x0040,
    0x0200,
    0x0405,
    0x0c32,
    0x0380,
    0x0db2,
    0x0038,
    0x0a07,
    0x0380,
    0x000b,
    0x098f,
    0x00e3,
    0x070a,
    0x0532,
    0x0043,
    0x0848,
    0x0051,
    0x0c32,
    0x0200,
    0x0380,
    0x0db2,
    0x0038,
    0x0a07,
    0x0380,
    0x080c,
    0x09f1,
    0x0a02,
    0x0d87,
    0x0812,
    0x0008,
    0x01a0,
    0x0a02,
    0x08a0,
    0x044e,
    0x0a15,
    0x0b88,
    0x0890,
    0x0450,
    0x0afe,
    0x0bff,
    0x0dd1,
    0x0812,
    0x0c51,
    0x0a1f,
    0x0bb4,
    0x0450,
    0x0dd1,
    0x088e,
    0x0d48,
    0x0013,
    0x0890,
    0x0c51,
    0x0200,
    0x0405,
    0x0a08,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x0a16,
    0x0442,
    0x0a02,
    0x00b0,
    0x0c40,
    0x0a02,
    0x0585,
    0x0812,
    0x0008,
    0x0902,
    0x00e5,
    0x0e77,
    0x0040,
    0x0200,
    0x0405,
    0x0c32,
    0x0380,
    0x0db2,
    0x0038,
    0x0a07,
    0x0380,
    0x000b,
    0x098f,
    0x00e3,
    0x070a,
    0x0532,
    0x0043,
    0x0848,
    0x0051,
    0x0c32,
    0x0200,
    0x0380,
    0x0db2,
    0x0038,
    0x0a07,
    0x0380,
    0x080c,
    0x09f1,
    0x0881,
    0x0d41,
    0x0848,
    0x083c,
    0x0205,
    0x000e,
    0x0985,
    0x0200,
    0x0890,
    0x0450,
    0x0d05,
    0x0c51,
    0x0881,
    0x0d41,
    0x0848,
    0x083c,
    0x0a20,
    0x080f,
    0x0188,
    0x0d41,
    0x0848,
    0x083c,
    0x0a02,
    0x000e,
    0x0902,
    0x00e6,
    0x0643,
    0x0a02,
    0x0d87,
    0x0812,
    0x0008,
    0x09a8,
    0x0a01,
    0x088e,
    0x0dc5,
    0x000e,
    0x01a3,
    0x0a02,
    0x08a0,
    0x044e,
    0x0a01,
    0x0c2a,
    0x023f,
    0x042b,
    0x088e,
    0x0d44,
    0x0c2c,
    0x0a02,
    0x042d,
    0x08c5,
    0x0f8c,
    0x0a15,
    0x0b88,
    0x0890,
    0x0450,
    0x0afe,
    0x0bff,
    0x0dd1,
    0x0812,
    0x0c51,
    0x0a15,
    0x0b88,
    0x0450,
    0x0205,
    0x0dd1,
    0x0013,
    0x0c51,
    0x0200,
    0x088e,
    0x0c45,
    0x00e6,
    0x0643,
    0x0a02,
    0x0d87,
    0x0812,
    0x0008,
    0x01a0,
    0x0a02,
    0x08a0,
    0x044e,
    0x0a15,
    0x0b88,
    0x0890,
    0x0450,
    0x0afe,
    0x0bff,
    0x0dd1,
    0x0812,
    0x0c51,
    0x0a1f,
    0x0bb4,
    0x0450,
    0x0dd1,
    0x088e,
    0x0d48,
    0x0013,
    0x0890,
    0x0c51,
    0x0200,
    0x0405,
    0x0a08,
    0x0ddd,
    0x0818,
    0x0c5d,
    0x0a16,
    0x0442,
    0x0a02,
    0x00b0,
    0x0c40,
    0x0a01,
    0x0585,
    0x0812,
    0x0008,
    0x0182,
    0x00e5,
    0x0ebd,
    0x0040,
};
