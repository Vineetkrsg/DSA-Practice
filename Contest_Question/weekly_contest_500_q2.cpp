// Problem: Sum of Primes in Range
//
// You are given an integer n.
//
// Let r be the integer formed by reversing the digits of n.
//
// Return the sum of all prime numbers between
// min(n, r) and max(n, r), inclusive.
//
// Example 1:
// Input: 13
// Output: 132
//
// Explanation:
// Reverse of 13 is 31.
// Prime numbers between 13 and 31 are:
// 13, 17, 19, 23, 29, 31
//
// Sum = 132
//
// Example 2:
// Input: 10
// Output: 17
//
// Explanation:
// Reverse of 10 is 1.
// Prime numbers between 1 and 10 are:
// 2, 3, 5, 7
//
// Sum = 17
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int original = n;
    int rev = 0;

    while (n > 0) {

        int digit = n % 10;

        rev = rev * 10 + digit;

        n = n / 10;
    }

    int start = min(original, rev);
    int end = max(original, rev);

    int primeSum = 0;

    for (int i = start; i <= end; i++) {

        bool isPrime = true;

        if (i <= 1) {
            isPrime = false;
        }

        for (int j = 2; j * j <= i; j++) {

            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primeSum += i;
        }
    }

    cout << primeSum;

    return 0;
}
