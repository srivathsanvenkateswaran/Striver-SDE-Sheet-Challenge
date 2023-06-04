#include <bits/stdc++.h> 
long long maxSubarraySum(int nums[], int n)
{
    long long ans = INT_MIN;
    long long currSum = 0;

    for(int i=0; i<n; i++) {
        currSum += nums[i];
        ans = max(ans, currSum);

        if(currSum < 0) 
            currSum = 0;
    }

    if(ans < 0)
        ans = 0;

    return ans;
}