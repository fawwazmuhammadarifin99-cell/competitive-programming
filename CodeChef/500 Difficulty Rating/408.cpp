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
        if (a > 10 * b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}