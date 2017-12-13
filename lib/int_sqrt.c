/*
 * Copyright (C) 2013 Davidlohr Bueso <davidlohr.bueso@hp.com>
 *
 *  Based on the shift-and-subtract algorithm for computing integer
 *  square root from Guy L. Steele.
 */

#include <linux/kernel.h>
#include <linux/export.h>

/**
 * int_sqrt - rough approximation to sqrt
 * @x: integer of which to calculate the sqrt
 *
 * A very rough approximation to the sqrt() function.
 */
<<<<<<< HEAD
inline unsigned long int_sqrt(unsigned long x)
{
	register unsigned long tmp;
	register unsigned long place;
	register unsigned long root = 0;
=======
unsigned long int_sqrt(unsigned long x)
{
	unsigned long b, m, y = 0;
>>>>>>> 55d768e2f9058aa68224277a32bf84f0a687486d

	if (x <= 1)
		return x;

<<<<<<< HEAD
	place = 1UL << (BITS_PER_LONG - 2);

	do{
		place >>= 2;
	}while(place > x);

	do {
		tmp = root + place;
		root >>= 1;

		if (x >= tmp)
		{
			x -= tmp;
			root += place;
		}
		place >>= 2;
	}while (place != 0);

	return root;
}
EXPORT_SYMBOL(int_sqrt);

=======
	m = 1UL << (BITS_PER_LONG - 2);
	while (m != 0) {
		b = y + m;
		y >>= 1;

		if (x >= b) {
			x -= b;
			y += m;
		}
		m >>= 2;
	}

	return y;
}
EXPORT_SYMBOL(int_sqrt);
>>>>>>> 55d768e2f9058aa68224277a32bf84f0a687486d
