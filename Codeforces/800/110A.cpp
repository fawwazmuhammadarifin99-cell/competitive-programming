#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int counter = 0;
    cin >> s;

    for (int i = 0; i < s.size(); i++) { // pake s.size karena s-nya string | O(n)
        if (s[i] == '4' || s[i] == '7') {
            counter++;
        }
    }

    if (counter == 7 || counter == 4) { // O(1)
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

// TIME COMPLEXITY = O(n) x O(1)
//                 = O(n)