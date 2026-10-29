#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n, w, total = 0; // K = HARGA PISANG, N = UANG YANG DIA PUNYA W = PISANG YANG DIBELI
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i ++) {
        total += i * k;
    }
    
    int borrow = total - n;
    if (borrow <= 0) {
        cout << 0;
    } else {
        cout << borrow;
    }
    

    return 0;
}

/*

3 17 4 k n w
1 * 3
2 * 3
3 * 3
4 * 3
*/