/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#pragma once

// 100k bed thermistor with a 10K pull-up resistor - made by $ buildroot/share/scripts/createTemperatureLookupMarlin.py --rp=10000

const temp_entry_t temptable_99[] PROGMEM = {
        { OV(  10), 340}, // col 46 ADC val:  0 0 0 0 0 0 0 0 0 0 -- 0
        { OV(  12), 330}, // col 46 ADC val:  0 0 0 0 0 0 0 0 0 0 -- 0
        { OV(  14), 320}, // col 46 ADC val:  0 0 0 0 0 0 0 0 0 0 -- 0
        { OV(  16), 310}, // col 45 ADC val:  0 0 0 0 0 0 0 0 0 0 -- 0
        { OV(  19), 300}, // col 44 ADC val:  21 21 19 19 21 19 19 21 19 20 -- 19
        { OV(  23), 290}, // col 43 ADC val:  25 25 22 23 25 22 23 25 23 23 -- 23
        { OV(  28), 280}, // col 42 ADC val:  30 27 27 30 27 28 30 29 27 30 -- 28
        { OV(  33), 270}, // col 41 ADC val:  35 35 32 32 35 32 32 35 34 32 -- 33
        { OV(  39), 260}, // col 40 ADC val:  42 38 38 42 38 38 42 41 38 39 -- 39
        { OV(  47), 250}, // col 39 ADC val:  50 49 45 46 50 45 46 50 49 45 -- 47
        { OV(  51), 245}, // col 38 ADC val:  54 53 49 50 54 49 50 55 54 50 -- 51
        { OV(  56), 240}, // col 37 ADC val:  60 58 53 54 58 58 54 55 59 54 -- 56
        { OV(  59), 235}, // col 36 ADC val:  57 56 59 60 64 58 59 60 65 59 -- 59
        { OV(  59), 230}, // col 35 ADC val:  62 57 58 62 57 58 62 61 57 58 -- 59
        { OV(  64), 225}, // col 34 ADC val:  68 62 63 64 68 62 63 68 66 62 -- 64
        { OV(  71), 220}, // col 33 ADC val:  74 73 68 69 75 69 70 76 74 69 -- 71
        { OV(  79), 215}, // col 32 ADC val:  83 81 76 77 83 81 76 76 78 82 -- 79
        { OV(  86), 210}, // col 31 ADC val:  90 88 83 84 85 90 88 83 85 86 -- 86
        { OV(  95), 205}, // col 30 ADC val:  98 90 92 99 97 92 93 99 98 92 -- 95
        { OV( 103), 200}, // col 29 ADC val:  107 105 99 100 101 108 101 102 103 108 -- 103
        { OV( 113), 195}, // col 28 ADC val:  118 111 112 118 116 114 109 110 112 117 -- 113
        { OV( 124), 190}, // col 27 ADC val:  130 127 120 121 123 124 129 127 120 122 -- 124
        { OV( 136), 185}, // col 26 ADC val:  142 139 132 134 135 141 140 132 134 135 -- 136
        { OV( 150), 180}, // col 25 ADC val:  158 155 146 147 149 157 154 146 148 149 -- 150
        { OV( 183), 170}, // col 24 ADC val:  191 186 176 178 180 182 191 188 178 180 -- 183
        { OV( 222), 160}, // col 23 ADC val:  229 226 217 219 221 223 232 229 214 217 -- 222
        { OV( 271), 150}, // col 22 ADC val:  281 278 276 273 262 264 266 273 270 267 -- 271
        { OV( 327), 140}, // col 21 ADC val:  337 333 330 316 319 320 324 332 331 329 -- 327
        { OV( 387), 130}, // col 20 ADC val:  397 393 389 377 379 382 384 387 392 391 -- 387
        { OV( 451), 120}, // col 19 ADC val:  465 463 460 459 442 443 444 445 446 447 -- 451
        { OV( 531), 110}, // col 18 ADC val:  533 533 533 531 532 531 530 530 530 529 -- 531
        { OV( 561), 105}, // col 17 ADC val:  571 568 567 564 564 561 554 556 555 556 -- 561
        { OV( 593), 100}, // col 16 ADC val:  600 598 597 596 594 593 592 590 589 588 -- 593
        { OV( 627),  95}, // col 15 ADC val:  633 632 631 629 629 627 626 625 623 622 -- 627
        { OV( 662),  90}, // col 14 ADC val:  666 665 663 663 662 662 661 662 660 659 -- 662
        { OV( 679),  85}, // col 13 ADC val:  673 672 671 671 669 668 667 699 700 700 -- 679
        { OV( 712),  80}, // col 12 ADC val:  719 717 716 715 713 711 711 710 708 707 -- 712
        { OV( 748),  75}, // col 11 ADC val:  753 752 752 750 749 748 748 746 746 745 -- 748
        { OV( 783),  70}, // col 10 ADC val:  788 788 785 785 784 783 783 782 781 780 -- 783
        { OV( 828),  65}, // col 9 ADC val:  831 830 829 829 829 828 828 827 827 826 -- 828
        { OV( 845),  60}, // col 8 ADC val:  842 843 844 845 845 845 844 844 850 851 -- 845
        { OV( 814),  55}, // col 7 ADC val:  821 820 819 818 815 813 811 810 808 808 -- 814
        { OV( 860),  50}, // col 6 ADC val:  866 865 862 861 860 859 859 857 856 855 -- 860
        { OV( 895),  45}, // col 5 ADC val:  900 899 897 897 895 896 894 893 892 891 -- 895
        { OV( 915),  40}, // col 4 ADC val:  917 917 916 916 916 917 915 915 914 914 -- 915
        { OV( 937),  30}, // col 3 ADC val:  941 938 939 938 937 937 937 935 936 936 -- 937
        { OV( 963),  20}, // col 2 ADC val:  964 963 964 965 965 965 964 963 964 962 -- 963
        { OV( 990),  10}, // col 1 ADC val:  0 0 0 0 0 0 0 0 0 0 -- 0
        { OV( 1023),   0}, // col 0 ADC val:  0 0 0 0 0 0 0 0 0 0 -- 0
};
