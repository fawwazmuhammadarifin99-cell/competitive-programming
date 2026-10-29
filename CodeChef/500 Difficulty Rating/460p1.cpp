#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    double b;
    cin >> a >> b;

    if (a % 5 == 0 && (a + 0.50) <= b) {
        b -= (a + 0.50);
    }
   // else if(a % 5 != 0 || a > b) {
     //   cout << fixed << setprecision(2) << b << '\n';
    //}

    cout << fixed << setprecision(2) << b << '\n';

    return 0;
}