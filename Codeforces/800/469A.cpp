#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    set<int> unique_levels;

    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        unique_levels.insert(level);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        unique_levels.insert(level);
    }

    if (unique_levels.size() == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }

    return 0;
}

// TIME COMPLEXITY = O((p + q) log n)