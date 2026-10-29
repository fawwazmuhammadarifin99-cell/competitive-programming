#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a % b == 0) {
            cout << "0";
        } else {
            cout << b - (a % b);
        }
        cout << "\n";       
    }

    return 0;
}

// TIME COMPLEXITY = O(t)