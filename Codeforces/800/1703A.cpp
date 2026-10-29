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
        int counter = 0;
        for (int i = 0; i  < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
     if (s == "yes") {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}