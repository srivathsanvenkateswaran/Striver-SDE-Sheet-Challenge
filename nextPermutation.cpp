#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    int bp = -1;

    for(int i=nums.size()-2; i>=0; i--) {
        if(nums[i] < nums[i+1]) {
            bp = i;
            break;
        }
    }

    if(bp>=0) {
        for(int i=nums.size()-1; i>bp; i--) {
            if(nums[i] > nums[bp]) {
                swap(nums[i], nums[bp]);
                break;
            }
        }
    }

    reverse(nums.begin()+bp+1, nums.end());
    
    vector<int> ans;

    for(int i=0; i<n; i++) {
        ans.push_back(nums[i]);
    }

    return ans;
}