#ifndef MINIDK_HAL_H
#define MINIDK_HAL_H

namespace HAL
{
static const PinName SDCard_mosi = P1_24;
static const PinName SDCard_miso = P1_23;
static const PinName SDCard_sclk = P1_20;
static const PinName SDCard_cs = P1_21;

static const PinName MainSerial_TX = P0_2;
static const PinName MainSerial_RX = P0_3;
static const PinName BackupSerial_TX = P0_15;
static const PinName BackupSerial_RX = P0_16;
};

#endif