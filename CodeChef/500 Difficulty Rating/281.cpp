#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        if (a > b) {
            cout << "A\n";
        } else {
            cout << "B\n";
        }
    }

    return 0;
}