#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int nums[3];
        cin >> nums[0] >> nums[1] >> nums[2];
        
        sort(nums, nums + 3);
      
        if (nums[2] > nums[0] + nums[1]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    

    return 0;
}