#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);

    int range_ok = ((unsigned)INT_MAX + 1u == 0u);

    printf("RANGE_OK: %d\n", range_ok);
    
    //Приведение к unsigned обязательно: INT_MAX + 1 в int — это
    //переполнение (UB). В unsigned арифметика модульная, поэтому
    //(unsigned)INT_MAX + 1u гарантированно равно 0u.
}