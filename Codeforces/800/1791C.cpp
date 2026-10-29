#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n; // n ini s.size()
        int size = n;
        int left = 0;
        int right = n - 1;
        string s;
        cin >> s;

        while (left < right && s[left] != s[right]) {
            left++;
            right--;
            size -= 2;
        }

        cout << size << endl;

    }

    return 0;
}

// TIME COMPLEXITY = O(n) per testcase