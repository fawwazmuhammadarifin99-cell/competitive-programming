#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int a = s[0] - '0';
        int b = s[2] - '0';

        cout << a + b << '\n';

    }

    return 0;
}