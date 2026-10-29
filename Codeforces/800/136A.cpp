#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> answer(n + 1);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        answer[x] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << answer[i] << " ";
    }

    return 0;
}

// TIME COMPLEXITY = O(n) + O(n)
//                 = O(n)