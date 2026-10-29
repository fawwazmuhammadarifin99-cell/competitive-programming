#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int messi = a * 2 + b, ronaldo = c * 2 + d;

    if (messi > ronaldo) {
        cout << "Messi\n";
    }
    else if (ronaldo > messi) {
        cout << "Ronaldo\n";
    } else {
        cout << "Equal\n";
    }

    return 0;
}