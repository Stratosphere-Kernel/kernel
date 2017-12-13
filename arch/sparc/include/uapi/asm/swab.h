#ifndef _SPARC_SWAB_H
#define _SPARC_SWAB_H

#include <linux/types.h>
#include <asm/asi.h>

#if defined(__sparc__) && defined(__arch64__)
static inline __u16 __arch_swab16p(const __u16 *addr)
{
	__u16 ret;

<<<<<<< HEAD
	__asm__ __volatile__ ("lduha [%2] %3, %0"
			      : "=r" (ret)
			      : "m" (*addr), "r" (addr), "i" (ASI_PL));
=======
	__asm__ __volatile__ ("lduha [%1] %2, %0"
			      : "=r" (ret)
			      : "r" (addr), "i" (ASI_PL));
>>>>>>> 55d768e2f9058aa68224277a32bf84f0a687486d
	return ret;
}
#define __arch_swab16p __arch_swab16p

static inline __u32 __arch_swab32p(const __u32 *addr)
{
	__u32 ret;

<<<<<<< HEAD
	__asm__ __volatile__ ("lduwa [%2] %3, %0"
			      : "=r" (ret)
			      : "m" (*addr), "r" (addr), "i" (ASI_PL));
=======
	__asm__ __volatile__ ("lduwa [%1] %2, %0"
			      : "=r" (ret)
			      : "r" (addr), "i" (ASI_PL));
>>>>>>> 55d768e2f9058aa68224277a32bf84f0a687486d
	return ret;
}
#define __arch_swab32p __arch_swab32p

static inline __u64 __arch_swab64p(const __u64 *addr)
{
	__u64 ret;

<<<<<<< HEAD
	__asm__ __volatile__ ("ldxa [%2] %3, %0"
			      : "=r" (ret)
			      : "m" (*addr), "r" (addr), "i" (ASI_PL));
=======
	__asm__ __volatile__ ("ldxa [%1] %2, %0"
			      : "=r" (ret)
			      : "r" (addr), "i" (ASI_PL));
>>>>>>> 55d768e2f9058aa68224277a32bf84f0a687486d
	return ret;
}
#define __arch_swab64p __arch_swab64p

#else
#define __SWAB_64_THRU_32__
#endif /* defined(__sparc__) && defined(__arch64__) */

#endif /* _SPARC_SWAB_H */
