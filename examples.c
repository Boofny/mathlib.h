#include <stdio.h>
#include "mathlib.h"

int main(void) {
    printf("Constant PI:                        %f\n", PI);
    printf("Constant e (Euler's number):        %f\n\n", E);

    printf("Example of addition:                %.2f\n", add(2, 3));
    printf("Example of subtraction:             %.2f\n", subtract(6, 10));
    printf("Example of multiplication:          %.2f\n", multiply(23, 11));
    printf("Example of division:                %.2f\n\n", divide(12, 2));

    printf("Example of rounding (> .5):         %.2f\n", round(4.6));
    printf("Example of rounding (< .5):         %.2f\n", round(4.5));
    printf("Example of ceiling:                 %.2f\n", ceil(4.6));
    printf("Example of flooring:                %.2f\n", floor(4.6));
    printf("Example of truncating:              %f\n\n", truncate(1.23456));

    printf("Example of absolute integer value:  %.d\n", absolute(-30));
    printf("Example of absolute integer value:  %.d\n", absolute(25));
    printf("Example of absolute float value:    %.2f\n", absolute(-5.2));
    printf("Example of absolute float value:    %.2f\n", absolute(6.3));
    printf("Example of copy sign value:         %.2f\n", copysign(3.5, -7.5));
    printf("Example of copy sign value:         %.2f\n", copysign(3.5, 7.5));
    return 0;
}