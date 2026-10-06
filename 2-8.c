#include <stdio.h>
#include <float.h>

int main(void) {
    printf("FLOAT: size=%zu, digits=%d, max=%e\n",
           sizeof(float), FLT_DIG, (double)FLT_MAX);

    printf("DOUBLE: size=%zu, digits=%d, max=%e\n",
           sizeof(double), DBL_DIG, DBL_MAX);

    printf("LDOUBLE: size=%zu, digits=%d, max=%Le\n",
           sizeof(long double), LDBL_DIG, LDBL_MAX);

           // Количество цифр показателя степени в выводе (e+38, e+308, e+4932) может отличаться в зависимости от системы. 
           // На некоторых платформах (например, MSVC) long double совпадает по размеру с double — тогда sizeof(long double) == 8 
           // и LDBL_DIG == DBL_DIG.

}