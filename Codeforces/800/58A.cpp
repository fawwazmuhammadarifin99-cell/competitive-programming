#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string target = "hello";
    
    int counter = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == target[counter]) {
            counter++;
            if (counter == 5) {
                break;
            }
        }
    }

    if (counter == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}