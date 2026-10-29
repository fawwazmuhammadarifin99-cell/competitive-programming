#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "Tetrahedron") {
            total += 4;
        }
        else if (s == "Cube") {
            total += 6;
        }
        else if (s == "Octahedron") {
            total += 8;
        }
        else if (s == "Dodecahedron") {
            total += 12;
        } else {
            total += 20;
        }
    }

    cout << total;
    return 0;
}

// TIME COMPLEXITY = O(n)