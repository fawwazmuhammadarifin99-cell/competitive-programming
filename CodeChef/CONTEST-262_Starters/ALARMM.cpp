#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int alarm = 0, lastcov = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1' && i > lastcov) {
                alarm++;
                int alarm_posit = min(n - 1, i + k);
                lastcov = alarm_posit;
            }
        }

        cout << alarm << '\n';
    }

    return 0;
}