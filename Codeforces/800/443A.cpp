#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);
    set<char> letter;

    for (int i = 0; i < s.size(); i++) {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z') {
            letter.insert(ch);
        }
    }

    cout << letter.size();
    return 0;
}

// TIME COMPLEXITY = O(n)