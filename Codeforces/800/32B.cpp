#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    string teks = "";
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            teks += "0";
        }
        else if (s[i] == '-') {
            if (s[i+1] == '-') {
                teks += "2";
                i++;
            } else {
                teks += "1";
                i++;
            }
        }
    }

    cout << teks << endl;

    return 0;
}

// TIME COMPEXITY = O(n)