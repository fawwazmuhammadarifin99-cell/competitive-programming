#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int upper = 0, lower = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            upper++;
        } else {
            lower++;
        }
    }

    if (upper > lower) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
    }   
    cout << s;
    return 0;
}

// O(n)