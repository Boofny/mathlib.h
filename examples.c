#include <stdio.h>
#include "mathlib.h"

int main(void) {
    printf("Example of addition:        %.2f\n", add(2, 3));
    printf("Example of subtraction:     %.2f\n", subtract(6, 10));
    printf("Example of multiplication:  %.2f\n", multiply(23, 11));
    return 0;
}