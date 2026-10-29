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

        if (a + b <= c) {
            cout << 2 << '\n';
        }
        else if (a <= c) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }

    return 0;
}