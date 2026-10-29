#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);

    int maxValue = -1;
    int minValue = 101;

    int posMax = 0;
    int posMin = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] > maxValue) {
            maxValue = a[i];
            posMax = i;
        }

        if (a[i] <= minValue) {
            minValue = a[i];
            posMin = i;
        }
    }

    int swaps = posMax + (n - 1 - posMin);

    if (posMax > posMin) {
        swaps--;
    }

    cout << swaps;

    return 0;
}