/*
 * arch/xtensa/platform/xtavnet/include/platform/lcd.h
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2001, 2006 Tensilica Inc.
 */

#ifndef __XTENSA_XTAVNET_LCD_H
#define __XTENSA_XTAVNET_LCD_H

<<<<<<< HEAD
#ifdef CONFIG_XTFPGA_LCD
=======
>>>>>>> 55d768e2f9058aa68224277a32bf84f0a687486d
/* Display string STR at position POS on the LCD. */
void lcd_disp_at_pos(char *str, unsigned char pos);

/* Shift the contents of the LCD display left or right. */
void lcd_shiftleft(void);
void lcd_shiftright(void);
<<<<<<< HEAD
#else
static inline void lcd_disp_at_pos(char *str, unsigned char pos)
{
}

static inline void lcd_shiftleft(void)
{
}

static inline void lcd_shiftright(void)
{
}
#endif

=======
>>>>>>> 55d768e2f9058aa68224277a32bf84f0a687486d
#endif
