#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b, c;
    cin >> a >> b >> c;

    string combined = a + b;

    sort(combined.begin(), combined.end());
    sort(c.begin(), c.end());

    if (combined == c) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}