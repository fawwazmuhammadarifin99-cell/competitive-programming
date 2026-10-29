#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, current = 0;
    int maxPassenger = current;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        current = current - a + b;

        if (current > maxPassenger) {
            maxPassenger = current;
        }
    }

    cout << maxPassenger;
    return 0;
}