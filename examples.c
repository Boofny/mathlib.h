#include <stdio.h>
#include "mathlib.h"

int main(void) {
    printf("Constant PI: %f\n", PI);
    printf("Constant e (Euler's number): %f\n\n", E);

    printf("Example of addition: %.2f\n", add(2, 3));
    printf("Example of subtraction: %.2f\n", subtract(6, 10));
    printf("Example of multiplication: %.2f\n", multiply(23, 11));
    printf("Example of division: %.2f\n\n", divide(12, 2));

    printf("Example of a factorial: %d\n\n", factorial(5));

    printf("Example of rounding (> .5): %.2f\n", round(4.6));
    printf("Example of rounding (< .5): %.2f\n", round(4.5));
    printf("Example of ceiling: %.2f\n", ceil(4.6));
    printf("Example of flooring: %.2f\n", floor(4.6));
    printf("Example of truncating: %f\n\n", truncate(1.23456));

    printf("Example of the power function (positive, integer exponent): %.2f\n", power(4, 2));
    printf("Example of the power function (exponent is zero): %.2f\n", power(3, 0));
    printf("Example of the power function (exponent is negative): %f\n", power(2, -3));

    printf("Example of absolute integer value: %.d\n", absolute(-30));
    printf("Example of absolute integer value: %.d\n", absolute(25));
    printf("Example of absolute float value: %.2f\n", fabsolute(-5.2));
    printf("Example of absolute float value: %.2f\n", fabsolute(6.3));
    printf("Example of copy sign value: %.2f\n", copysign(3.5, -7.5));
    printf("Example of copy sign value: %.2f\n\n", copysign(3.5, 7.5));

    printf("Example of the sinus of a radian: %f\n", sine(0.5));
    printf("Example of the sinus of a radian: %f\n", sine(1));
    printf("Example of the cosinus of a radian: %f\n", cosine(2));
    printf("Example of the cosinus of a radian: %f\n", cosine(2.5));
    printf("Example of the tangent of a radian: %f\n", tangent(0.5));
    printf("Example of the tangent of a radian: %f\n", tangent(1));
    printf("Example of the cotangent of a radian: %f\n", cotangent(1));
    printf("Example of the cotangent of a radian: %f\n\n", cotangent(2));

    printf("Example of the hyperbolic sine of a radian: %f\n", sineh(1));
    printf("Example of the hyperbolic sine of a radian: %f\n", sineh(2));
    printf("Example of the hyperbolic cosine of a radian: %f\n", cosineh(0.5));
    printf("Example of the hyperbolic cosine of a radian: %f\n", cosineh(1.5));
    printf("Example of the hyperbolic tangent of a radian: %f\n", tangenth(3));
    return 0;
}