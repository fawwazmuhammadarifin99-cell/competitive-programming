#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        if (n > 100) {
            cout << 2000 << '\n';
        }
        else if (n > 70 && n <= 100) {
            cout << 500 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }

    return 0;
}