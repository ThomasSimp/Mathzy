#include "../include/Mathzy.h"
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
            base = 1.0 / base;
            exponent = -exponent;
        }
        double result = 1.0;
        while (exponent > 0) {
            if (exponent % 2 == 1) {
                result *= base;
            }
            base *= base;
            exponent /= 2;
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

    unsigned long long fibonacci(int n) {
        if (n < 0) return 0;
        if (n == 0) return 0;
        if (n == 1) return 1;
        unsigned long long a = 0, b = 1;
        for (int i = 2; i <= n; i++) {
            unsigned long long temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }

    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    unsigned long long combination(int n, int r) {
        return factorial(n) / (factorial(r) * factorial(n - r));
    }

    unsigned long long permutation(int n, int r) {
        return factorial(n) / factorial(n - r);
    }

}
