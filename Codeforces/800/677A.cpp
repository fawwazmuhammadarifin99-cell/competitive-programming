#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h;
    cin >> n >> h;

    int counter = 0;

    for (int i = 0; i < n; i++) { // n
        int tinggi;
        cin >> tinggi;

        if (tinggi > h) { // O(1)
            counter +=2; // O(1)
        } else {
            counter++;
        }
    }
    
    cout << counter;
    return 0;
}

// TIME COMPLEXITY = n x O(1)
//                 = O(n)