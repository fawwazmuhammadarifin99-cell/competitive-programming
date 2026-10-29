#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int nums[3];
        cin >> nums[0] >> nums[1];
            
        sort(nums, nums + 2);
            
        int a = nums[0];
        int b = nums[1];
        cout << b - a << '\n';
    }
    

    return 0;
}