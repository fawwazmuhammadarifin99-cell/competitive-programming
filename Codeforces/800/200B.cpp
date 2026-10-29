#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    double total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        total += p;
    }

    cout << total/n;

    return 0;
}