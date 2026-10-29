#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0 ; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a > b && a > c) {
            cout << "Setter\n";
        }
        else if (b > a && b > c) {
            cout << "Tester\n";
        } else {
            cout << "Editorialist\n";
        }
    }

    return 0;
}