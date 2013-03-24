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

static const PinName LED1 = P3_25;
static const PinName LED2 = P3_26;

static const PinName KEY1 = P2_11;
static const PinName KEY2 = P2_12;

static const char alpha_step_pin_name[] = "2.0";
static const char alpha_dir_pin_name[] = "2.1";
static const char alpha_en_pin_name[] = "2.2";
static const char beta_step_pin_name[] = "2.3";
static const char beta_dir_pin_name[] = "2.4";
static const char beta_en_pin_name[] = "2.5";
static const char gamma_step_pin_name[] = "2.6";
static const char gamma_dir_pin_name[] = "2.7";
static const char gamma_en_pin_name[] = "2.8";

static const char pause_led_pin_name[] = "3.35";
static const char pause_button_pin_name[] = "2.11";

};

#endif