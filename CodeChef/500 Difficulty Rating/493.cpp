#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if ((a + b >= d) || (b + c >= d) || (a + c >= d)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}