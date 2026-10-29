#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 4, counter = 0;
    for (int i = 0; i < count; i++) {
        int a;
        cin >> a;

        if (a >= 10) {
            counter++;
        }
    }

    cout << counter;

    return 0;
}