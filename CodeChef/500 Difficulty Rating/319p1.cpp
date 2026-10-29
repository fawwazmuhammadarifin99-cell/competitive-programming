#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n >= 6) {
        cout << "Bronze\n";
    }
    else if (n < 6 && n >= 3) {
        cout << "Silver\n";
    } else {
        cout << "Gold\n";
    }

    return 0;
}