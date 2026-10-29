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

        if (a + c * d > b) {
            cout << "OVERFLOW\n";
        }
        else if (a + c * d == b) {
            cout << "FILLED\n";
        } else {
            cout << "UNFILLED\n";
        }
    }

    return 0;
}