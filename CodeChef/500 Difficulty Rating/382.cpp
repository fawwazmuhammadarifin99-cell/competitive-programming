#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        if (3 * a <= 2 * b) {
            cout << 3 * a << '\n';
        } else {
            cout << 2 * b << '\n';
        }
    }

    return 0;
}