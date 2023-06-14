#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_map<int,int>freq;
	int i;
	for( i=0;i<n;i++)
	{
		freq[arr[i]]++;
		if(freq[arr[i]]>1)
		break;

	}
	int x=arr[i];
	return x;
}
