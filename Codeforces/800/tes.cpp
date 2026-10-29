#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (a % i == 0) {
            cout << a << " BUKAN PRIMA\n";
        } else {
            cout << a << " PRIMA\n";
        }
    }

    return 0;
}