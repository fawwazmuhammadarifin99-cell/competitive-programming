#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nums[2];
    cin >> nums[0] >> nums[1];

    sort(nums, nums + 2);
    
    cout << nums[1] << '\n';
    

    return 0;
}