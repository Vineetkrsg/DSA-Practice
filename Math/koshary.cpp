/*
Question:
Starting from (0,0), ronnie can move:
- Long step: (+2,0) or (0,+2)
- At most one short step: (+1,0) or (0,+1)

Determine if he can reach (x,y).

Category: Math / Parity (Odd-Even)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int x, y;
        cin >> x >> y;

        if(x % 2 == 1 && y % 2 == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
