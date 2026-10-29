#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        string hasil = "";
        hasil += s[0];
        for (int j = 1; j < s.size(); j+= 2) {
            hasil += s[j];
    }
    cout << hasil << endl;
    }

    return 0;
}

// TIME COMPLEXITY = O(n) per test case