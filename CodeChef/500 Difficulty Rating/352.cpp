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

        if (a >= 1 && a <= 4) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}