#include <stdint.h>
#include <string.h>

void soc_secure_read_deviceid(uint32_t deviceid[2])
{
    memset(deviceid, 1, 2*sizeof(*deviceid));
}


void nrf_802154_temperature_init(void)
{
    // Intentionally empty
}

int8_t nrf_802154_temperature_get(void)
{
    return (int8_t)-1;
}
