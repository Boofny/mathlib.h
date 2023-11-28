#pragma once

#include <math.h>

#define PI 3.14159265358979323846
#define E  2.71828182845904523536

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    return num1 / num2;
}

int factorial(int num) {
    if (num < 0) return -1; // Cannot calculate factorial of a negative integer
    if (num == 0 || num == 1) return 1; 

    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

double ceil(double num) {
    return (int)num + 1;
}

double floor(double num) {
    return (int)num;
}

double round(double num) {
    if (num >= num / 2.00) return ceil(num);
    else return floor(num);
}

double truncate(double num) {
    return (int)num;
}

int absolute(int num) {
    return (num < 0) ? num * -1 : num;
}

double fabsolute(double num) {
    return (num < 0) ? num * -1 : num;
}

double copysign(double num1, double num2) {
    return (num2 < 0) ? fabsolute(num1) : num1;
}

double power(double num, double exponent) {
    if (exponent > 0) {
        double result = 1;
        for (int i = 1; i <= exponent; i++) {
            result *= num;
        }
        return result;
    }

    if (exponent == 0) {
        return 1;
    }

    if (exponent < 0) {
        int positiveExponent = (int)absolute(exponent);
        int result = 1;
        for (int i = 1; i <= positiveExponent; i++) {
            result *= num;
        }
        return (double)1 / result;
    }
}

double sinus(double radian) {
    double result = 0;
    double copyRadian = radian;
    double term;
    for(int i = 0; i < 10; i++) {
        term = (power(copyRadian, i * 2 + 1) / tgamma((i * 2 + 1) + 1));
        if (i % 2 != 0) {
            result -= term;
        }
        if (i % 2 == 0) {
            result += term;
        }
    }

    return fabsolute(result);
} 

double cosine(double radian) {
    double result = 0;
    double copyRadian = radian;
    double term;
    for(int i = 0; i < 10; i++) {
        term = (power(-1, i) * (power(copyRadian, 2 * i)) / tgamma((2 * i) + 1));

        result += term;
    }

    return result;
}

double tangent(double radian) {
    return sinus(radian) / cosine(radian);
}

double cotangent(double radian) {
    return cosine(radian) / sinus(radian);
}