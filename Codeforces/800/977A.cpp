#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        if (n % 10 != 0) {
            n-= 1;
        } else {
            n/= 10;
        }
    }

    cout << n;

    return 0;
}

// COMPLEXITY TIME = O(k)