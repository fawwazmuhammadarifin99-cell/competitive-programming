#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, b, counter = 0;
    cin >> l >> b;

    while (l <= b) {
        l *= 3;
        b *= 2;
        counter += 1;
    }

    cout << counter;
    

    return 0;
}


/*
INPUT 2 HAL LIMAK DAN BOB
LIMAK BERKALI LIPAT 3 TIAP TAHUN
BOB BERKALI LIPAT 2 TIAP TAHUN
BERAPA TAHUN KAH SEHINGGA LIMAK > BOB

4 7
4*2 = 12
7*2 = 14
*/