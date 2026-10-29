#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        string s;
        cin >> s;

        string target = "Timur";
        sort(s.begin(), s.end());
        sort(target.begin(), target.end());

        if (s == target) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}