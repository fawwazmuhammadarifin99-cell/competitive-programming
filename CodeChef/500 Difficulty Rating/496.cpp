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
        int discount = a / 10;
        if (discount >= 100) {
            cout << discount << '\n';
        } else {
            cout << 100 << '\n';
        }
    }

    return 0;
}