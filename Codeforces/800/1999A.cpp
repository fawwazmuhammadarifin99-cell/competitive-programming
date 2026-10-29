#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int a = s[0] - '0'; // CONTOHNYA = ASCII '5' = 53 DAN ASCII '0' = 48 JADI 53 - 48 = 5
        int b = s[1] - '0';
        cout << a + b << '\n';
    }

    return 0;
}