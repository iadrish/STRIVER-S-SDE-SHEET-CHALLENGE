#include <bits/stdc++.h> 
bool static comparison(vector<int>a , vector<int>b)
{
    return(a[1]>b[1]);
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int n=jobs.size();
    sort(jobs.begin(),jobs.end(),comparison);
    int maxi=jobs[0][0];

  //to find max deadline
    for(int i=1;i<n;i++){
        maxi=max(maxi,jobs[i][0]);
    }

      // to define array of size equals to max deadline

    int slot[maxi+1];
      // assigning -1 to slot array indicating no job is done on that day
    for(int i=0;i<=maxi;i++)
      slot[i]=-1;

     // intialize jobProfit to zero and do the maxprofit job in its last day (deadline day)
      int jobProfit=0;
          //traversing all jobs

      for(int i=0;i<n;i++){
          // traversing for empty day from its deadline to 1st day
          for(int j=jobs[i][0];j>0;j--){
              if(slot[j]==-1)
              {
                  slot[j]=i;
                  jobProfit+=jobs[i][1];
                  break;
              }
          }
      }
      return jobProfit;
}
