#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nilai(n);

    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
    }

    int batas = nilai[k - 1];
    int total = 0;

    for (int i = 0; i < n; i++) {
        if (nilai[i] >= batas && nilai[i] > 0) {
            total++;
        }
    }

    cout << total;

    return 0;
}