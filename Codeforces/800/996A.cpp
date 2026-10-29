#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int total = 0;

    total += n/100;
    n %= 100;
    total += n/20;
    n %= 20;
    total += n/10;
    n %= 10;
    total += n/5;
    n %= 5;
    total += n;

    cout << total;

    return 0;
}

// TIME COMPLEXITY = O(1)