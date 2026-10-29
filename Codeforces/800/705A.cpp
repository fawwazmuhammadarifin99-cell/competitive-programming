#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0 && i != n) {
            cout << "I hate";
        } else {
            cout << "I love";
        }

        if (i == n) {
            cout << " it";
        } else {
            cout << " that ";
        }
    }

    return 0;
}

// TIME COMPLEXITY = O(n)