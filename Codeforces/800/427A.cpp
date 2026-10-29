#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int free_officer = 0;
    int untreated_crimes = 0;

    for (int i = 0; i < n; i++) {
        int event;
        cin >> event;

        if (event == -1) {
            if (free_officer > 0) {
                free_officer--;
            } else {
                untreated_crimes++;
            }
        } else {
            free_officer += event;
        }
    }

    cout << untreated_crimes;
    return 0;
}