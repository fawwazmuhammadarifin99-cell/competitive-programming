#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    
    s[0] = toupper(s[0]); // O(1)
    cout << s; // O(n)

    return 0;
}

// TIME COMPLEXITY = O(1) + O(n)
//                 = O(n)