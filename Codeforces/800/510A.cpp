#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        if (i%2 != 0) {
            for (int j = 0; j < m; j++) {
                cout <<'#';
            }
            cout << '\n';
        }
        else if (i%4 == 2) {
            for (int j = 1; j < m; j++) {
                cout << '.';
            }
            cout << '#';
            cout << '\n';
        } else {
            cout << '#';
            for (int j = 0; j < m-1; j++) {
                cout << '.';
            }
            cout << '\n';
        }
    }

    return 0;
}

// TIME COMPLEXITY = O(nm)