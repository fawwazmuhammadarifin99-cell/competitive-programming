#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;
        if (a % 10 < (a / 10) * 10) { // 9 < 1
            cout << a % 10 << '\n';
        } 
        else if (a < 10) {
            cout << a << '\n';
        } else {
            cout << a / 10 << '\n';
        }
    }

    return 0;
}