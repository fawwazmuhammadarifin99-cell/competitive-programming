#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> lucky_numbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    for (int i = 0; i < lucky_numbers.size(); i++) {
        if (n % lucky_numbers[i] == 0) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}