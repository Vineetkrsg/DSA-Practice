// Given two integers dividend and divisor, divide them without
// using multiplication, division, or the modulo operator.
// The quotient should be truncated toward zero.
// If the quotient exceeds the 32-bit signed integer range,
// return INT_MAX or INT_MIN accordingly.
//
// Example:
// Input: dividend = 10, divisor = 3
// Output: 3

#include <iostream>
#include <climits>
using namespace std;

int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    long long a = abs((long long)dividend);
    long long b = abs((long long)divisor);
    long long quotient = 0;

    while (a >= b) {
        long long temp = b;
        long long multiple = 1;

        while (a >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }

        a -= temp;
        quotient += multiple;
    }

    if ((dividend < 0) != (divisor < 0)) {
        quotient = -quotient;
    }

    return (int)quotient;
}

int main() {
    int dividend = 10;
    int divisor = 3;

    cout << divide(dividend, divisor) << endl;

    return 0;
}
