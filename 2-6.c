#include <stdio.h>
#include <stdint.h>

int main(void) {
    int input;
    scanf("%d", &input);

    uint8_t a = (uint8_t)input;

    uint8_t add  = a + 10;   
    uint8_t mul2 = a * 2;    
    uint8_t sqr  = a * a;    

    printf("ADD: %u\n",  (unsigned)add);
    printf("MUL2: %u\n", (unsigned)mul2);
    printf("SQR: %u\n",  (unsigned)sqr);

}