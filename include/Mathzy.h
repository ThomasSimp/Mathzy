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

    /**
     * @brief Calculates the n-th Fibonacci number.
     * 
     * The Fibonacci sequence is a series of numbers in which each number is the sum of the 
     * two preceding ones, usually starting with 0 and 1. The sequence is defined as follows:
     * 
     * - F(0) = 0, F(1) = 1
     * - F(n) = F(n - 1) + F(n - 2) for n >= 2
     * 
     * This function computes the Fibonacci number iteratively to avoid stack overflow 
     * issues that can occur with recursive implementations for larger values of n.
     * 
     * @param n The index of the Fibonacci sequence (must be a non-negative integer).
     * 
     * @return The n-th Fibonacci number as an unsigned long long.
     * 
     * @throws std::invalid_argument if n is negative.
     */
    unsigned long long fibonacci(int n);

    /**
     * @brief Determines whether a given integer is a prime number.
     * 
     * A prime number is a natural number greater than 1 that cannot be formed by 
     * multiplying two smaller natural numbers. This function checks if the provided 
     * integer is prime by testing divisibility from 2 to the square root of n.
     * 
     * @param n The integer to check for primality (must be a positive integer).
     * 
     * @return True if n is a prime number, false otherwise.
     * 
     * @throws std::invalid_argument if n is less than 2.
     */
    bool isPrime(int n);

    /**
     * @brief Calculates the number of combinations of n items taken r at a time.
     * 
     * The number of combinations is defined as the number of ways to choose r items 
     * from n items without regard to the order of selection. It is given by the formula:
     * 
     * - C(n, r) = n! / (r! * (n - r)!)
     * 
     * This function first checks the validity of the inputs and then computes the 
     * combinations using the factorial function.
     * 
     * @param n The total number of items (must be non-negative).
     * @param r The number of items to choose (must be in the range [0, n]).
     * 
     * @return The number of combinations of n items taken r at a time as an 
     *         unsigned long long.
     * 
     * @throws std::invalid_argument if r is negative or greater than n.
     */
    unsigned long long combination(int n, int r);

    /**
     * @brief Calculates the number of permutations of n items taken r at a time.
     * 
     * The number of permutations is defined as the number of ways to arrange r items 
     * from a set of n items. It is given by the formula:
     * 
     * - P(n, r) = n! / (n - r)!
     * 
     * This function first checks the validity of the inputs and then computes the 
     * permutations using the factorial function.
     * 
     * @param n The total number of items (must be non-negative).
     * @param r The number of items to arrange (must be in the range [0, n]).
     * 
     * @return The number of permutations of n items taken r at a time as an 
     *         unsigned long long.
     * 
     * @throws std::invalid_argument if r is negative or greater than n.
     */
    unsigned long long permutation(int n, int r);
}

#endif // MATHZY_H
