#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> x(3);
    cin >> x[0] >> x[1] >> x[2];

    int min_val = min({x[0], x[1], x[2]});
    int max_val = max({x[0], x[1], x[2]});

    cout << max_val - min_val;

    return 0;
}