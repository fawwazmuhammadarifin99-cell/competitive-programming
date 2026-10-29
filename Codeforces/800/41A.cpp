#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string t, s;
    cin >> t >> s;
    reverse(t.begin(), t.end()); // O(n)
    
    if (s == t) { // O)n
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

// TIME COMPLEXITY = O(n) + O(n)
//                 = O(2n) = O(n)