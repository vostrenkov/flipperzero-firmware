#include <furi.h>
#include "spi_mem_chips.h"

const SPIMemChipVendorList SPIMemChipVendors[] = {
    {"Cypress", SPIMemChipVendorCypress},
    {"Fujitsu", SPIMemChipVendorFujitsu},
    {"EON", SPIMemChipVendorEon},
    {"Atmel", SPIMemChipVendorAtmel},
    {"Micron", SPIMemChipVendorMicron},
    {"AMIC", SPIMemChipVendorAmic},
    {"Nor-Mem", SPIMemChipVendorNormem},
    {"Sanyo", SPIMemChipVendorSanyo},
    {"Intel", SPIMemChipVendorIntel},
    {"ESMT", SPIMemChipVendorEsmt},
    {"Fudan", SPIMemChipVendorFudan},
    {"Hyundai", SPIMemChipVendorHyundai},
    {"SST", SPIMemChipVendorSst},
    {"Micronix", SPIMemChipVendorMicronix},
    {"GigaDevice", SPIMemChipVendorGigadevice},
    {"ISSI", SPIMemChipVendorIssi},
    {"Winbond", SPIMemChipVendorWinbond},
    {"BOYA", SPIMemChipVendorBoya},
    {NULL, 0}};

const SPIMemChip SPIMemChips[] = {
    {"AT25DF161", // TODO: validate!
     SPIMemChipVendorAtmel,
     0x46,
     0x02,
     //2L * 1024L * 1024L,
     512L * 1024L, // FIXME!
     (SPIMemChipWriteMode)(SPIMemChipWriteModeByte | SPIMemChipWriteMode256B),
     256,
     0x81},
    {"BY25Q128AS", // TODO: validate!
     SPIMemChipVendorBoya,
     0x40,
     0x18,
     //16L * 1024L * 1024L, // FIXME
     2L * 1024L * 1024L,
     (SPIMemChipWriteMode)(SPIMemChipWriteModeByte | SPIMemChipWriteMode256B),
     256,
     0x81},
    {"AT45DB161E",
     SPIMemChipVendorAtmel,
     0x26,
     0x00,
     2L * 1024L * 1024L,
     (SPIMemChipWriteMode)(SPIMemChipWriteModeByte | SPIMemChipWriteModeDual),
     512,
     0x81},
    {"W25Q40BV", SPIMemChipVendorWinbond, 0x40, 0x13, 512L * 1024L, SPIMemChipWriteMode256B, 4096, 0x20},
    {"W25Q16BV",
     SPIMemChipVendorWinbond,
     0x40,
     0x15,
     2L * 1024L * 1024L,
     SPIMemChipWriteMode256B,
     4096,
     0x20},
    {"W25Q32BV",
     SPIMemChipVendorWinbond,
     0x40,
     0x16,
     4L * 1024L * 1024L,
     //64L * 1024L, // FIXME HACKHACK
     SPIMemChipWriteMode256B,
     4096,
     0x20},
    {"W25Q64CV",
     SPIMemChipVendorWinbond,
     0x40,
     0x17,
     8L * 1024L * 1024L,
     SPIMemChipWriteMode256B,
     4096,
     0x20},
    {"W25Q64DW",
     SPIMemChipVendorWinbond,
     0x60,
     0x17,
     8L * 1024L * 1024L,
     SPIMemChipWriteMode256B,
     4096,
     0x20},
    {"W25Q128BV",
     SPIMemChipVendorWinbond,
     0x40,
     0x18,
     16L * 1024L * 1024L,
     SPIMemChipWriteMode256B,
     4096,
     0x20},
    {"W25Q256FV",
     SPIMemChipVendorWinbond,
     0x40,
     0x19,
     32L * 1024L * 1024L,
     SPIMemChipWriteMode256B,
     4096,
     0x20},
    {"SST25VF080B",
     SPIMemChipVendorSst,
     0x25,
     0x8E,
     1L * 1024L * 1024L,
     (SPIMemChipWriteMode)(SPIMemChipWriteModeByte | SPIMemChipWriteModeAai),
     4096,
     0x20},
    {"SST25VF016B",
     SPIMemChipVendorSst,
     0x25,
     0x41,
     2L * 1024L * 1024L,
     (SPIMemChipWriteMode)(SPIMemChipWriteModeByte | SPIMemChipWriteModeAai),
     4096,
     0x20},
    {"M25P32",
     SPIMemChipVendorMicron,
     0x20,
     0x16,
     4L * 1024L * 1024L,
     SPIMemChipWriteMode256B,
     64L * 1024L,
     0xD8},
    {"M25P80",
     SPIMemChipVendorMicron,
     0x20,
     0x14,
     1L * 1024L * 1024L,
     SPIMemChipWriteMode256B,
     64L * 1024L,
     0xD8},
    {"M25P40", SPIMemChipVendorMicron, 0x20, 0x13, 512L * 1024L, SPIMemChipWriteMode256B, 64L * 1024L, 0xD8},
    {"EN25Q32B", SPIMemChipVendorEon, 0x30, 0x16, 4L * 1024L * 1024L, SPIMemChipWriteMode256B, 4096, 0x20},
    {"GD25Q64B",
     SPIMemChipVendorGigadevice,
     0x40,
     0x17,
     8L * 1024L * 1024L,
     SPIMemChipWriteMode256B,
     4096,
     0x20},
    {"GD25Q16B",
     SPIMemChipVendorGigadevice,
     0x40,
     0x15,
     2L * 1024L * 1024L,
     SPIMemChipWriteMode256B,
     4096,
     0x20},
    {"GD25Q32C",
     SPIMemChipVendorGigadevice,
     0x40,
     0x16,
     4L * 1024L * 1024L,
     SPIMemChipWriteMode256B,
     4096,
     0x20},
    {"S25FL216K",
     SPIMemChipVendorCypress,
     0x40,
     0x15,
     2L * 1024L * 1024L,
     SPIMemChipWriteMode256B,
     4096,
     0x20},
    {"S25FL032P",
     SPIMemChipVendorCypress,
     0x02,
     0x15,
     4L * 1024L * 1024L,
     SPIMemChipWriteMode256B,
     4096,
     0x20},
    {"A25L080", SPIMemChipVendorAmic, 0x30, 0x14, 1L * 1024L * 1024L, SPIMemChipWriteMode256B, 4096, 0x20},
    {"F25L004",
     SPIMemChipVendorEsmt,
     0x20,
     0x13,
     512L * 1024L,
     (SPIMemChipWriteMode)(SPIMemChipWriteModeByte | SPIMemChipWriteModeAai),
     4096,
     0x20},
    {"PCT25VF016B",
     SPIMemChipVendorSst,
     0x25,
     0x41,
     2L * 1024L * 1024L,
     (SPIMemChipWriteMode)(SPIMemChipWriteModeByte | SPIMemChipWriteModeAai),
     4096,
     0x20},
    {"NM25Q128EV",
     SPIMemChipVendorNormem,
     0x21,
     0x18,
     16L * 1024L * 1024L,
     SPIMemChipWriteMode256B,
     4096,
     0x20},
    {NULL, 0, 0, 0, 0, 0, 0, 0}};

const char* spi_mem_chip_get_vendor_name(const uint8_t vendor_id) {
    for(const SPIMemChipVendorList* vendor = SPIMemChipVendors; vendor->name != NULL; ++vendor) {
        if(vendor->vendor_id == vendor_id) {
            return vendor->name;
        }
    }
    return "UNKNOWN";
}

const SPIMemChip* spi_mem_chip_get_chip(const uint8_t vendor_id, const uint8_t type_id, const uint8_t capacity_id) {
    for(const SPIMemChip* chip = SPIMemChips; chip->name != NULL; ++chip) {
        if(chip->vendor_id == vendor_id && chip->type_id == type_id && chip->capacity_id == capacity_id) {
            return chip;
        }
    }
    return NULL;
}