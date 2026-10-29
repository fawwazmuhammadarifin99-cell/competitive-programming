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
        if (a >= 7) {
            cout << "HOT\n";
        }
        else if (a >= 4 && a < 7) {
            cout << "MEDIUM\n";
        } else {
            cout << "MILD\n";
        }
    }

    return 0;
}