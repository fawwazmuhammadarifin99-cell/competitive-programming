#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;

        if (a > 6) {
            cout << "GOLD\n";
        }
        else if (a <= 6 && a > 3) {
            cout << "SILVER\n";
        } else {
            cout << "BRONZE\n";
        }
    }

    return 0;
}