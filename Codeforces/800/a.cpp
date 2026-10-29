#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;
    char huruf;
    cin >> huruf;
    string s;
    cin >> s;

    for (int i = 0; i < a; i++) {
        if (s[i] == huruf) {
            cout << "Unnar fann hana!";
            break;
        }
    }

    cout << "Unnar fann hana ekki!";

    return 0;
}