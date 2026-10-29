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
        int sum = 0;

        for (int i = 0; i < s.size(); i++) {
            sum += (s[i] - '0');
        }

        cout << sum << '\n';
    }

    return 0;
}