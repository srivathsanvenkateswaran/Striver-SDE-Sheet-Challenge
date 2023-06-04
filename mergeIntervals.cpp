#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;

    for(int i=0; i<intervals.size(); i++) {
        if(ans.size() == 0) {
            // Initial case where there is no interval inside answer.
            ans.push_back(intervals[i]);
        }
        else {
            int prevEnd = ans[ans.size()-1][1];
            if(prevEnd >= intervals[i][0]) {
                // can be merged
                ans[ans.size()-1][1] = max(prevEnd, intervals[i][1]);
                continue;
            }
            else {
                // cannot be merged
                ans.push_back(intervals[i]);
            }
        }
    }

    return ans;
}
