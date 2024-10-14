#ifndef MATHZY_H
#define MATHZY_H

namespace Mathzy {

    /**
     * @brief Calculates the factorial of a given non-negative integer.
     * 
     * The factorial of a number n (denoted as n!) is the product of all positive integers 
     * less than or equal to n. It is defined as:
     * 
     * - n! = n × (n - 1) × (n - 2) × ... × 1
     * - 0! is defined as 1.
     * 
     * This function uses an iterative approach to compute the factorial to avoid 
     * issues with stack overflow that can occur with recursive implementations for 
     * larger values of n.
     * 
     * @param n The non-negative integer whose factorial is to be calculated.
     *          Must be in the range [0, 20] to prevent overflow of the return type.
     * 
     * @return The factorial of the specified number as an unsigned long long.
     *         Returns 1 for n = 0.
     * 
     * @throws std::invalid_argument if n is negative.
     */
    unsigned long long factorial(int n);

    /**
     * @brief Calculates the power of a given base raised to a specific exponent.
     * 
     * This function computes the value of the base raised to the exponent, which can
     * be positive, negative, or zero. The mathematical expression is:
     * 
     * - base^exponent = base × base × ... (exponent times)
     * 
     * If the exponent is negative, the function returns the reciprocal of the power.
     * 
     * @param base The base value (double) that is to be raised to a power.
     * @param exponent The exponent value (integer) that determines the power to which
     *                 the base is raised. Can be negative, zero, or positive.
     * 
     * @return The result of the base raised to the exponent as a double.
     */
    double power(double base, int exponent);

    /**
     * @brief Calculates the greatest common divisor (GCD) of two integers.
     * 
     * The GCD of two integers a and b is the largest positive integer that divides
     * both a and b without leaving a remainder. This function employs the Euclidean
     * algorithm, which is efficient and effective for computing the GCD.
     * 
     * @param a The first integer (can be positive or negative).
     * @param b The second integer (can be positive or negative).
     * 
     * @return The greatest common divisor of a and b. If both a and b are 0, 
     *         the function will return 0.
     */
    int gcd(int a, int b);

    /**
     * @brief Calculates the least common multiple (LCM) of two integers.
     * 
     * The LCM of two integers a and b is the smallest positive integer that is 
     * divisible by both a and b. It can be calculated using the relationship:
     * 
     * - LCM(a, b) = |a * b| / GCD(a, b)
     * 
     * This function first computes the GCD and then uses it to determine the LCM.
     * 
     * @param a The first integer (can be positive or negative).
     * @param b The second integer (can be positive or negative).
     * 
     * @return The least common multiple of a and b. If both a and b are 0,
     *         the function will return 0.
     */
    int lcm(int a, int b);

    /**
     * @brief Calculates the square root of a non-negative value.
     * 
     * The square root of a number x is a value y such that y^2 = x. This function
     * uses the standard mathematical library function to compute the square root.
     * If the input value is negative, it will return NaN (Not a Number).
     * 
     * @param value The non-negative value for which the square root is to be calculated.
     * 
     * @return The square root of the specified value as a double. If the value is negative,
     *         the function will return NaN.
     * 
     * @throws std::invalid_argument if value is negative.
     */
    double sqrt(double value);
}

#endif // MATHZY_H
