#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string akhir = "";

    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            akhir += s[i];
        }
    }

    cout << akhir;

    return 0;
}