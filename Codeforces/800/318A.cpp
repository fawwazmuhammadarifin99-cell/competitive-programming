#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;

    long long totalGanjil = (n + 1) / 2;

    if (k <= totalGanjil) {
        cout << 2 * k - 1;
    } else {
        cout << 2 * (k - totalGanjil);
    }

    return 0;
}