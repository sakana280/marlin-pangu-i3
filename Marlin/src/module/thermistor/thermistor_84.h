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
 * These values are from the OEM's Sprinter-based firmware.
 * 
 * Comments in the OEM firmware claim to use
 * values from the calculator http://nathan7.eu/stuff/RepRapCalculator/RepRapCalculator.html#TempLookup
 *      r0: 100000
 *      t0: 25
 *      r1: 0
 *      r2: 10000
 *      beta: 3950
 *      max adc: 1023
 * and that matches temperature values for ADC 131-1023,
 * but ADC values 1-121 have been hacked in from a different curve that give ~40deg(!) lower temperatures.
 */

// Map ADC values 0-1024 to temperature in degrees Celsius.
// Use 100 entries so that we have enough data points around the ABS melting point of 230degC
// that linear interpolation of values in between will have minimal error.
constexpr temp_entry_t temptable_84[] PROGMEM = {
   {OV(1), 549},
   {OV(11), 274},
   {OV(21), 228},
   {OV(31), 204},
   {OV(41), 188},
   {OV(51), 176},
   {OV(61), 166},
   {OV(71), 159},
   {OV(81), 152},
   {OV(91), 146},
   {OV(101), 141},
   {OV(111), 137},
   {OV(121), 133},
   // {OV(1), 710},
   // {OV(11), 341},
   // {OV(21), 284},
   // {OV(31), 254},
   // {OV(41), 235},
   // {OV(51), 220},
   // {OV(61), 209},
   // {OV(71), 199},
   // {OV(81), 192},
   // {OV(91), 185},
   // {OV(101), 179},
   // {OV(111), 173},
   // {OV(121), 168},
   {OV(131), 164},
   {OV(141), 160},
   {OV(151), 156},
   {OV(161), 153},
   {OV(171), 149},
   {OV(181), 146},
   {OV(191), 143},
   {OV(201), 141},
   {OV(211), 138},
   {OV(221), 135},
   {OV(231), 133},
   {OV(241), 131},
   {OV(251), 129},
   {OV(261), 126},
   {OV(271), 124},
   {OV(281), 122},
   {OV(291), 120},
   {OV(301), 119},
   {OV(311), 117},
   {OV(321), 115},
   {OV(331), 113},
   {OV(341), 112},
   {OV(351), 110},
   {OV(361), 108},
   {OV(371), 107},
   {OV(381), 105},
   {OV(391), 104},
   {OV(401), 102},
   {OV(411), 101},
   {OV(421), 99},
   {OV(431), 98},
   {OV(441), 97},
   {OV(451), 95},
   {OV(461), 94},
   {OV(471), 93},
   {OV(481), 91},
   {OV(491), 90},
   {OV(501), 89},
   {OV(511), 87},
   {OV(521), 86},
   {OV(531), 85},
   {OV(541), 84},
   {OV(551), 82},
   {OV(561), 81},
   {OV(571), 80},
   {OV(581), 78},
   {OV(591), 77},
   {OV(601), 76},
   {OV(611), 75},
   {OV(621), 74},
   {OV(631), 72},
   {OV(641), 71},
   {OV(651), 70},
   {OV(661), 68},
   {OV(671), 67},
   {OV(681), 66},
   {OV(691), 65},
   {OV(701), 63},
   {OV(711), 62},
   {OV(721), 61},
   {OV(731), 59},
   {OV(741), 58},
   {OV(751), 57},
   {OV(761), 55},
   {OV(771), 54},
   {OV(781), 52},
   {OV(791), 51},
   {OV(801), 49},
   {OV(811), 48},
   {OV(821), 46},
   {OV(831), 45},
   {OV(841), 43},
   {OV(851), 41},
   {OV(861), 40},
   {OV(871), 38},
   {OV(881), 36},
   {OV(891), 34},
   {OV(901), 32},
   {OV(911), 29},
   {OV(921), 27},
   {OV(931), 24},
   {OV(941), 22},
   {OV(951), 19},
   {OV(961), 15},
   {OV(971), 11},
   {OV(981), 7},
   {OV(991), 2},
   {OV(1001), -5},
   {OV(1011), -15},
   {OV(1021), -38},
   {OV(1023), -53}
};
