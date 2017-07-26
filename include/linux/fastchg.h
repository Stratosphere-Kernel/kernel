/*
 * based on work from:
 *	Chad Froebel <chadfroebel@gmail.com> &
 *	Jean-Pierre Rasquin <yank555.lu@gmail.com>
 * 	for backwards compatibility
 *
 * Port to Osprey : engstk <eng.stk@sapo.pt>
 *

 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _LINUX_FASTCHG_H
#define _LINUX_FASTCHG_H

extern int force_fast_charge;
extern int fast_charge_level;
extern int usb_fast_charge_level;

#define FAST_CHARGE_DISABLED	0	/* default */
#define FAST_CHARGE_ENABLED		1

#define FAST_CHARGE_LEVELS	"Anything between range of 500 - 1500 mA (enter value in mA)"

#endif

