/*
 * Copyright (c) 2020 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * Mocks the CMSIS dependency of the nRF MDK headers.
 */

#ifndef CORE_CM4__
#define CORE_CM4__

#define __I
#define __IO
#define __O

/**
 * The model of the CPU & IRQ controller driver must provide
 * these functions below. These HW models do not provide them
 */
extern void __WFE(void);
extern void __SEV(void);
extern void NVIC_SetPendingIRQ(IRQn_Type IRQn);
extern void NVIC_ClearPendingIRQ(IRQn_Type IRQn);

/* Implement the following ARM intrinsics as no-op:
 * - ARM Data Synchronization Barrier
 * - ARM Data Memory Synchronization Barrier
 * - ARM Instruction Synchronization Barrier
 * - ARM No Operation
 */
#ifndef __DMB
#define __DMB()
#endif

#ifndef __DSB
#define __DSB()
#endif

#ifndef __ISB
#define __ISB()
#endif

#ifndef __NOP
#define __NOP()
#endif

#ifndef __CLREX
extern void clrex(void);
#define __CLREX()            clrex()
#endif /* __CLREX */

#ifndef __STREXB
extern unsigned int strexb(unsigned int, unsigned int *);
#define __STREXB(value, ptr) strexb(value, ptr)
#endif /* __STREXB */

#ifndef __LDREXW
extern unsigned int ldrexw(unsigned int *);
#define __LDREXW(ptr)        ldrexw(ptr)
#endif /* __LDREXW */

#ifndef __LDREXB
extern unsigned int ldrexw(unsigned int *);
#define __LDREXB(ptr)        ldrexb(ptr)
#endif /* __LDREXW */


#ifndef __STREXW
extern unsigned int strexw(unsigned int, unsigned int*);
#define __STREXW(value, ptr) strexw(value, ptr)
#endif /* __STREXW */

#ifndef SCB

struct scb {
    unsigned char ICSR;
};

extern struct scb BSIM_SCB;

#define SCB (&BSIM_SCB)
#endif

#define SCB_ICSR_VECTACTIVE_Msk (0x01)
#define SCB_ICSR_VECTACTIVE_Pos (0x01)

#define IRQ_ZERO_LATENCY 0x1

#endif
