#include <stdio.h>
#include <stdint.h>

int main(void) {
    printf("INT8: size=%zu, min=%d, max=%d, values=%lld\n",
           sizeof(int8_t), (int)INT8_MIN, (int)INT8_MAX,
           (long long)INT8_MAX - (long long)INT8_MIN + 1);

    printf("UINT8: size=%zu, min=0, max=%u, values=%llu\n",
           sizeof(uint8_t), (unsigned)UINT8_MAX,
           (unsigned long long)UINT8_MAX + 1ULL);

    printf("INT16: size=%zu, min=%d, max=%d, values=%lld\n",
           sizeof(int16_t), (int)INT16_MIN, (int)INT16_MAX,
           (long long)INT16_MAX - (long long)INT16_MIN + 1);

    printf("UINT16: size=%zu, min=0, max=%u, values=%llu\n",
           sizeof(uint16_t), (unsigned)UINT16_MAX,
           (unsigned long long)UINT16_MAX + 1ULL);

    printf("INT32: size=%zu, min=%d, max=%d, values=%lld\n",
           sizeof(int32_t), (int)INT32_MIN, (int)INT32_MAX,
           (long long)INT32_MAX - (long long)INT32_MIN + 1);

    printf("UINT32: size=%zu, min=0, max=%u, values=%llu\n",
           sizeof(uint32_t), (unsigned)UINT32_MAX,
           (unsigned long long)UINT32_MAX + 1ULL);

}