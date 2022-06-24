

typedef char scb;

scb BSIM_SCB;

void clrex(void)
{
    // Intentionally empty
}

unsigned int strexb(unsigned int value, unsigned int *ptr)
{
    (void)value;
    (void)ptr;

    return 0;
}

unsigned int ldrexb(unsigned int *ptr)
{
    (void)ptr;
    return 0;
}

unsigned int ldrexw(unsigned int *ptr)
{
    (void)ptr;
    return 0;
}

unsigned int strexw(unsigned int value, unsigned int*ptr)
{
    (void)value;
    (void)ptr;

    return 0;
}
