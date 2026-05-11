/*
Question:
Given x and y such that y is divisible by x,
determine if there exists an integer z where:

x < z < y
z is divisible by x
y is NOT divisible by z

Print YES if such z exists, otherwise NO.

Category: Number Theory (Divisibility)
*/
#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long x, y;
        cin >> x >> y;
 
        if (y / x == 2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
 
    return 0;
}
