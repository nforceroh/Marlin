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

// R25 = 100 kOhm, beta25 = 3950 K, 4.7 kOhm pull-up, QU-BD silicone bed QWG-104F-3950 thermistor
const short temptable_11[][2] PROGMEM = {
  { OV( 5), 500 },
  { OV( 15), 300 },
  { OV( 18), 290 },
  { OV( 20), 280 },
  { OV( 23), 270 },
  { OV( 26), 260 },
  { OV( 30), 250 },
  { OV( 35), 240 },
  { OV( 42), 230 },
  { OV( 50), 220 },
  { OV( 59), 210 },
  { OV( 72), 200 },
  { OV( 87), 190 },
  { OV( 107), 180 },
  { OV( 130), 170 },
  { OV( 195), 150 },
  { OV( 303), 130 },
  { OV( 369), 120 },
  { OV( 441), 110 },
  { OV( 522), 100 },
  { OV( 601), 90 },
  { OV( 684), 80 },
  { OV( 759), 70 },
  { OV( 831), 60 },
  { OV( 894), 50 },
  { OV( 940), 40 },
  { OV( 973), 30 },
  { OV( 986), 25 },
  { OV( 994), 20 },
  { OV( 1005), 15 },
  { OV( 1014), 10 },
  { OV( 1023), 1 }
};
