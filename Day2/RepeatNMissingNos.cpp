#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	pair<int,int> ans;
	int R=0;
	int M=0;
	vector<int>count(n,0);
	int sumArr=0;
	 for (int i=0; i<n; i++) {
		if(count[arr[i]]==1) {
			R= arr[i];
			break;
		}else{
			count[arr[i]]++;
		}
    }
	int sumN=0;

	for(int i=1;i<=n;i++){
		sumN+=i;
	}
	for(int i=0;i<n;i++){
		sumArr+=arr[i];
	}
	M=R-(sumArr-sumN);
	ans.first=M;
	ans.second=R;
	return ans;

	
}
