#include "Mathzy.h"
#include <cmath>

namespace Mathzy {

    unsigned long long factorial(int n) {
        if (n < 0) return 0; // Factorial is not defined for negative numbers
        if (n == 0 || n == 1) return 1;
        unsigned long long result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }

    double power(double base, int exponent) {
        if (exponent < 0) {
            return 1.0 / power(base, -exponent);
        }
        double result = 1.0;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }

    int gcd(int a, int b) {
        while (b != 0) {
            int t = b;
            b = a % b;
            a = t;
        }
        return a;
    }

    int lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }

    double sqrt(double value) {
        if (value < 0) return -1; // Error case for negative input
        return std::sqrt(value);
    }
}
