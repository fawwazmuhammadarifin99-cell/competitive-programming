#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << (n - 1) / 2 << '\n';
    }

    return 0;
}

// ini kalau brute froce solving problem

/*
int t;
    cin >> t;
    long long total = 0;

    for (int i = 0; i < t; i++) {
        long long n;
        cin >> n;
        for (int j = 1; j < n; j++) {
            for (int k = 1; k < n; k++) {
                if (j + k == n) {
                    total++;
                }
            }
        }
        cout << total / 2 << '\n';
    }
*/