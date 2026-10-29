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

        if (10 * a >= b) {
            cout << b * c << '\n';
        } else {
            cout << 10 * a * c << '\n';
        }
    }

    return 0;
}