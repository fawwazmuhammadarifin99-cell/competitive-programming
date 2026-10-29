#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    
    int counter = 1;

    for (int i = 0; i < s.size() - 1; i++) {
        char bomb = s[i]; // 0 0 1 1 1 1 1 1 1
        if (s[i+1] == bomb) {
            counter++;
            if (counter == 7) {
                break;
            } else {
                continue;
            }
        } else {
            counter = 1;
        }
    }
    
    if (counter == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}