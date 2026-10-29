#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n >= 100) {
        cout << "Wizard of Words";
    }
    else if (n >= 75) {
        cout << "Gladiator of Words";
    }
    else if (n >= 50) {
        cout << "Platinum Reader";
    }
    else if (n >= 30) {
        cout << "Diamond Reader";
    }
    else if (n >= 20) {
        cout << "Gold Reader";
    }
    else if (n >= 15) {
        cout << "Silver Reader";
    }
    else if (n >= 10) {
        cout << "Bronze Reader";
    }
    else if (n >= 5) {
        cout << "Avid Reader";
    }
    else if (n >= 3) {
        cout << "Comprehensive Reader";
    }
    else if (n >= 1) {
        cout << "Initiate Reader";
    }
    
    return 0;
}
