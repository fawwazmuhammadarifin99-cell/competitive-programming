#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, counter = 1;
    cin >> n;
    string prev;
    cin >> prev;

    for (int i = 1; i < n; i++) {
        string magnet;
        cin >> magnet;

        if (magnet != prev) {
            counter++;
        }

        prev = magnet;

    }

    cout << counter;
    return 0;
}

// TIME COMPLEXITY = O(n)