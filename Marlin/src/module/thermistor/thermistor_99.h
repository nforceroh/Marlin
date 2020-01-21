/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#pragma once

// 100k bed thermistor with a 10K pull-up resistor - made by $ buildroot/share/scripts/createTemperatureLookupMarlin.py --rp=10000
// Calculated on 01/08/2020 for skr_honeybee
const short temptable_99[][2] PROGMEM = {
  { OV( 1), 500 },
  { OV( 4), 330 },
  { OV( 5), 320 },
  { OV( 7), 310 },
  { OV( 8), 300 },
  { OV( 10), 290 },
  { OV( 16), 280 },
  { OV( 19), 270 },
  { OV( 22), 260 },
  { OV( 27), 250 },
  { OV( 32), 240 },
  { OV( 40), 230 },
  { OV( 50), 220 },
  { OV( 58), 210 },
  { OV( 73), 200 },
  { OV( 92), 190 },
  { OV( 116), 180 },
  { OV( 145), 170 },
  { OV( 166), 160 },
  { OV( 200), 150 },
  { OV( 268), 140 },
  { OV( 320), 130 },
  { OV( 385), 120 },
  { OV( 456), 110 },
  { OV( 537), 100 },
  { OV( 625), 90 },
  { OV( 700), 80 },
  { OV( 775), 70 },
  { OV( 840), 60 },
  { OV( 892), 50 },
  { OV( 935), 40 },
  { OV( 968), 30 },
  { OV( 981), 25 },
  { OV( 994), 20 },
  { OV( 1005), 15 },
  { OV( 1014), 10 },
  { OV( 1023), 1 }
};
