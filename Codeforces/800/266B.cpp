#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    for (int second = 0; second < t; second++) {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }

    cout << s;
    return 0;
}

// TIME COMPLEXITY = O(t x n)