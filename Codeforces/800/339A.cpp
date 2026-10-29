#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string nama;
    cin >> nama;
    vector<char> angka;

    for (int i = 0; i < nama.size(); i += 2) {
        angka.push_back(nama[i]);
    }
    sort(angka.begin(), angka.end());

    for (int i = 0; i < angka.size(); i++) {
        cout << angka[i];

        if (i < angka.size() - 1) {
            cout << "+";
        }
    }
    return 0;
}

/*
1. INPUT
2. LIHAT INDEX 0, 2, 4, 6 (YANG ANGKA)
3. IF ELSE > <
4. COUT LAGI DENGAN PLUS JUGA
*/