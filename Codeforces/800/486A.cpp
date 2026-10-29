#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, total = 0;
    cin >> n;

    if (n % 2 == 0) {
        total = n/2;
    } else {
        long long o = n - 1;
        total = o/2 - n;
    }
    cout << total;
    return 0;
}

// TIME COMPLEXITY = O(1)