#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n;
    cin >> s;

    int removals = 0;
    for (int i = 0; i < n - 1; i ++) { 
        if (s[i] == s[i+1]) {
            removals++;
        }
    }

    cout << removals << endl;
    return 0;
}

// O(n)