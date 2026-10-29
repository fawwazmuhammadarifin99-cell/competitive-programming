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

        if (a - c < b - d) {
            cout << "First\n";
        }
        else if (a - c > b - d) {
            cout << "Second\n";
        } else {
            cout << "Any\n";
        }
    }

    return 0;
}