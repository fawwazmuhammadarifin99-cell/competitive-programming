#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;

        if (a <= 15) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}