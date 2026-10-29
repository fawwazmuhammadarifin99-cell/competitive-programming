#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    string s;
    cin >> s;

    set<char> huruf;

    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);
        huruf.insert(s[i]);
    }

    if (huruf.size() == 26) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

// TIME COMPLEXITY = O(n)