#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int total = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > total) {
            total = a;
        }
    }

    cout << total;
    return 0;
}