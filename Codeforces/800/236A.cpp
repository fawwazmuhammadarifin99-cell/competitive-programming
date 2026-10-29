#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string nama; 
    cin >> nama; // O(n)
    set<char> s; 

    for (int i = 0; i < nama.size(); i++) { //O(n)
        s.insert(nama[i]); // O(1)
    }

    if (s.size() % 2 == 0) { // O(1)
        cout << "CHAT WITH HER!";
    } else { // O(1)
        cout << "IGNORE HIM!";
    }

    return 0;
}

//TIME COMPLEXITY = O(n) + O(n) x O(1) + O(1)
//                = O(n)