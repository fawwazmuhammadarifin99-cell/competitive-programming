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
        if (n >= 7) {
            cout << "HEAVY\n";
        }
        else if (n < 7 && n >= 3) {
            cout << "MODERATE\n";
        } else {
            cout << "LIGHT\n";
        }
    }

    return 0;
}