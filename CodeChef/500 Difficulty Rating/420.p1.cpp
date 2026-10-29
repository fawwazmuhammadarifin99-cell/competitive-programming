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

        int first = s[0] - '0';
        int last = s[s.size() - 1] - '0';
        cout << first + last << '\n';
    }

    return 0;
}