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

/*
 * Pangu i3 hotend and bed thermistors
 * values from the calculator http://nathan7.eu/stuff/RepRapCalculator/RepRapCalculator.html#TempLookup
 *      r0: 100000
 *      t0: 25
 *      r1: 0
 *      r2: 10000
 *      beta: 3950
 *      max adc: 1023
 */

constexpr temp_entry_t temptable_84[] PROGMEM = {
  // Should these numbers be wrapped in OV(x) instead of *OVERSAMPLENR ?
   {1*OVERSAMPLENR, 710},
   {36*OVERSAMPLENR, 244},
   {71*OVERSAMPLENR, 199},
   {106*OVERSAMPLENR, 176},
   {141*OVERSAMPLENR, 160},
   {176*OVERSAMPLENR, 148},
   {211*OVERSAMPLENR, 138},
   {246*OVERSAMPLENR, 130},
   {281*OVERSAMPLENR, 122},
   {316*OVERSAMPLENR, 116},
   {351*OVERSAMPLENR, 110},
   {386*OVERSAMPLENR, 105},
   {421*OVERSAMPLENR, 99},
   {456*OVERSAMPLENR, 95},
   {491*OVERSAMPLENR, 90},
   {526*OVERSAMPLENR, 85},
   {561*OVERSAMPLENR, 81},
   {596*OVERSAMPLENR, 77},
   {631*OVERSAMPLENR, 72},
   {666*OVERSAMPLENR, 68},
   {701*OVERSAMPLENR, 63},
   {736*OVERSAMPLENR, 59},
   {771*OVERSAMPLENR, 54},
   {806*OVERSAMPLENR, 49},
   {841*OVERSAMPLENR, 43},
   {876*OVERSAMPLENR, 37},
   {911*OVERSAMPLENR, 29},
   {946*OVERSAMPLENR, 20},
   {981*OVERSAMPLENR, 7},
   {1016*OVERSAMPLENR, -23}
};

/*
These values from the printer-melzi firmware pr3d provided to ysb.
The numbers look similar, possibly better resolution.
const short bedtemptable[BNUMTEMPS][2] = {
   {1, 549},
   {11, 274},
   {21, 228},
   {31, 204},
   {41, 188},
   {51, 176},
   {61, 166},
   {71, 159},
   {81, 152},
   {91, 146},
   {101, 141},
   {111, 137},
   {121, 133},
   {131, 164},
   {141, 160},
   {151, 156},
   {161, 153},
   {171, 149},
   {181, 146},
   {191, 143},
   {201, 141},
   {211, 138},
   {221, 135},
   {231, 133},
   {241, 131},
   {251, 129},
   {261, 126},
   {271, 124},
   {281, 122},
   {291, 120},
   {301, 119},
   {311, 117},
   {321, 115},
   {331, 113},
   {341, 112},
   {351, 110},
   {361, 108},
   {371, 107},
   {381, 105},
   {391, 104},
   {401, 102},
   {411, 101},
   {421, 99},
   {431, 98},
   {441, 97},
   {451, 95},
   {461, 94},
   {471, 93},
   {481, 91},
   {491, 90},
   {501, 89},
   {511, 87},
   {521, 86},
   {531, 85},
   {541, 84},
   {551, 82},
   {561, 81},
   {571, 80},
   {581, 78},
   {591, 77},
   {601, 76},
   {611, 75},
   {621, 74},
   {631, 72},
   {641, 71},
   {651, 70},
   {661, 68},
   {671, 67},
   {681, 66},
   {691, 65},
   {701, 63},
   {711, 62},
   {721, 61},
   {731, 59},
   {741, 58},
   {751, 57},
   {761, 55},
   {771, 54},
   {781, 52},
   {791, 51},
   {801, 49},
   {811, 48},
   {821, 46},
   {831, 45},
   {841, 43},
   {851, 41},
   {861, 40},
   {871, 38},
   {881, 36},
   {891, 34},
   {901, 32},
   {911, 29},
   {921, 27},
   {931, 24},
   {941, 22},
   {951, 19},
   {961, 15},
   {971, 11},
   {981, 7},
   {991, 2},
};

*/