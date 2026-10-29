#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s;

    for (int i = 0; i < 4; i++) {
        int angka;
        cin >> angka;
        s.insert(angka);
    }

    cout << 4 - s.size();

    return 0;
}

// TIME COMPLEXITY = O(1)