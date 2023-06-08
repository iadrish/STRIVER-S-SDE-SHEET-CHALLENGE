#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	map<int,int>freq;
	for(int i=0;i<n;i++)
	{
		freq[arr[i]]++;

	}
	for(auto it:freq)
	{
		if(it.second>n/2)
		return it.first;
	}

	return -1;
}