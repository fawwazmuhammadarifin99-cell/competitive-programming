#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}

// TIME COMPLEXITY = O(n)