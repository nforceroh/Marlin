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
// Calculated on 11/27/2019
const short temptable_99[][2] PROGMEM = {
  { OV( 5), 500 },
  { OV( 18), 330 },
  { OV( 20), 320 },
  { OV( 23), 310 },
  { OV( 26), 300 },
  { OV( 29), 290 },
  { OV( 34), 280 },
  { OV( 39), 270 },
  { OV( 46), 260 },
  { OV( 53), 250 },
  { OV( 62), 240 },
  { OV( 73), 230 },
  { OV( 87), 220 },
  { OV( 103), 210 },
  { OV( 123), 200 },
  { OV( 148), 190 },
  { OV( 178), 180 },
  { OV( 212), 170 },
  { OV( 254), 160 },
  { OV( 299), 150 },
  { OV( 352), 140 },
  { OV( 411), 130 },
  { OV( 480), 120 },
  { OV( 547), 110 },
  { OV( 616), 100 },
  { OV( 686), 90 },
  { OV( 751), 80 },
  { OV( 815), 70 },
  { OV( 868), 60 },
  { OV( 912), 50 },
  { OV( 949), 40 },
  { OV( 973), 30 },
  { OV( 985), 25 },
  { OV( 994), 20 },
  { OV( 1005), 15 },
  { OV( 1014), 10 },
  { OV( 1023), 1 }
};
