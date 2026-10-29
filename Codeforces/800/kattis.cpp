#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if (s[s.size() - 1] == '4') {
        cout << ".mp4";
    }
    else if (s[s.size() - 1] == 'd') {
        cout << ".blend";
    } else {
        cout << ".gz";
    }

    return 0;
}