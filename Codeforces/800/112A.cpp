#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin >> a >> b; // O(n)

    for (int i = 0; i < a.size(); i++) { // O(n)
       a[i] = tolower(a[i]); // O(1)
       b[i] = tolower(b[i]);
        if (a[i] < b[i]) { // O(1)
            cout << -1;
            return 0;
        }
        else if (a[i] > b[i]) {
            cout << 1;
            return 0;
        }

    }
    cout << 0; // O(1)
    return 0;
}

// TIME COMPLEXITY = O(n) + O(n) x O(1) + O(1)
//                 = O(n)
