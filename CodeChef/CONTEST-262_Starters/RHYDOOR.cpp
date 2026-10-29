#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int op_ac = 0, streak = 0;
        char curr_char = ' ';

        for (int i = 0; i < n; i++) {
            if (s[i] == curr_char) {
                streak++;
                if (streak == 3) {
                    op_ac++;
                    streak = 0;
                }
            } else {
                curr_char = s[i];
                streak = 1;
            }
        }

        cout << op_ac << '\n';
    }

    return 0;
}