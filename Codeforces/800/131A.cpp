#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int counter = 0;

    for (int i = 1; i < s.size(); i++) {
        if (isupper(s[i])) {
            counter++;
        }
    }

    if (counter == s.size() - 1) {
    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        } else {
            s[i] = toupper(s[i]);
        }
    }
}

    cout << s;

    return 0;
}