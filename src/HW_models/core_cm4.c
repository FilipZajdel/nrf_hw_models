

#include <stdint.h>

typedef char scb;

scb BSIM_SCB;

void __CLREX(void)
{
    // Intentionally empty
}

uint32_t __STREXB(uint8_t value, volatile uint8_t *ptr)
{
    (void)value;
    (void)ptr;

    return 0;
}

uint32_t __LDREXB(volatile uint8_t *ptr)
{
    (void)ptr;

    return 0;
}

uint32_t __LDREXW(volatile uint32_t *ptr)
{
    (void)ptr;

    return 0;
}

uint32_t __STREXW(uint32_t value, volatile uint32_t *ptr)
{
    (void)value;
    (void)ptr;

    return 0;
}

uint16_t __LDREXH(volatile uint16_t *ptr)
{
    (void)ptr;

    return 0;
}

uint32_t __STREXH(uint16_t value, volatile uint16_t *ptr)
{
    (void)value;
    (void)ptr;

    return 0;
}
