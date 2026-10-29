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
        if (a - b >= 0) {
            cout << a - b << '\n';
        } else {
            cout << 0 << '\n';
        }
    }

    return 0;
}