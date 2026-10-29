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

        if (100 * b <= 107 * a) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}