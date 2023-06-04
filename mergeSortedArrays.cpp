#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& nums1, vector<int>& nums2, int m, int n) {
	for(int i=m; i<m+n; i++) {
		nums1[i] = nums2[i-m];
	}
	sort(nums1.begin(), nums1.end());

	return nums1;
}