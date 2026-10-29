#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, counter = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int p, q;
        cin >> p >> q;

        if (p + 1 < q) {
            counter++;
        }
    }
    cout << counter;
    return 0;
}