#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while(n--){
        int nums[3];
        cin >> nums[0] >> nums[1] >> nums[2];
        
        // Sort the three numbers in ascending order
        sort(nums, nums + 3);
        
        // The second-maximum will always be at index 1
        cout << nums[1] << '\n';
    }

    return 0;
}