#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (a > b && a > c) {
            cout << "ALICE\n";
        }
        else if (b > a && b > c) {
            cout << "BOB\n";
        } else {
            cout << "CHARLIE\n";
        }
    }

    return 0;
}