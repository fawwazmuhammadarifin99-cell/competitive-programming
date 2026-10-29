#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, countA = 0, countB = 0;
    string s;

    cin >> n >> s;

    for (int i = 0; i < s.size(); i++) { // for selalu O(n)
        if (s[i] == 'A') {
            countA++;
        } else {
            countB++;
        }
    }

    if (countA > countB) { // If else selalu O(1)
        cout << "Anton";
    }
    else if (countB > countA) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
    return 0;
}

// COMPLEXITY TIME = O(n) x O(1)
//                 = O(n)
