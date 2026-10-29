#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << (c - b) / a << '\n';
    }

    return 0;
}