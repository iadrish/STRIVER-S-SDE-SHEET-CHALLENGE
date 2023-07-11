#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int xr=0;
    map<int,int>mpp;
    mpp[xr]++;
    int cnt=0;
    for(int i=0;i<arr.size();i++)
    {
        xr=xr^arr[i];
        int x1=xr^x;
        cnt+=mpp[x1];

        mpp[xr]++;
    }
    return cnt;
}