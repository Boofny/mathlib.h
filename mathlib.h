#pragma once

// Constants
#define PI 3.14159265358979323846
#define E  2.71828182845904523536

// Basic aritmetic functions
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

// Rounding functions
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

// Absolute functions

int absolute(int num) {
    return (num < 0) ? num * -1 : num;
}