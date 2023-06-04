#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    if(prices.size() == 1) return 0;

    int currProfit = 0;
    int maxProfit = INT_MIN;
    int currMin = 0;

    for(int i=0; i<prices.size(); i++) {
        if(prices[i] < prices[currMin]) {
            currMin = i;
        }

        currProfit = prices[i] - prices[currMin];
        maxProfit = max(maxProfit, currProfit);
    }

    return maxProfit;
}