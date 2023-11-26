// Comparing mathlib.h to math.h
#include <stdio.h>
#include <math.h>
#include "mathlib.h"

int main(void) {
    printf("FLOOR (math.h): %.2f\n", floor(4.6));
    printf("CEIL  (math.h): %.2f\n", floor(4.6));
    return 0;
}