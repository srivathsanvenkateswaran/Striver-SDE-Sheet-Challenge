#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	int i;
	vector<int> freq(n+1, 0);

	for(i=0; i<n; i++) {
		if(freq[arr[i]] == 0) {
			freq[arr[i]]++;
		}
		else {
			return arr[i];
		}
	}
	return 0;
}
