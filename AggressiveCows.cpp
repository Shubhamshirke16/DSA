// Aggressive Cows using binary search

#include <iostream>
using namespace std;
#include<vector>
#include <algorithm>

bool isPosible(vector<int> & stalls,int k,int mid)
{
  int cowCount=1;
  int lastPos=stalls[0];
  for(int i=0;i<stalls.size();i++)
  {
    
    if(stalls[i]-lastPos >= mid )
    {
      cowCount++;
      if(cowCount==k)
      {
        return true;
      }
      lastPos=stalls[i];
    }
  }
  return false;
}

int aggressiveCows(vector<int> &stalls, int n, int k)
{
    sort(stalls.begin(),stalls.end());
    
    int s=0,res=-1;
    int maxi=-1;
    for(int i=0;i<stalls.size();i++)
    {
        maxi=max(maxi,stalls[i]);
    }
    
    int e=maxi;
    
    int mid=s+(e-s)/2;
    
    while(s<=e)
    {
      if(isPosible(stalls,k,mid))
      {
        s=mid+1;
        res=mid;
      }
      else
      {
        e=mid-1;
      }
      mid=s+(e-s)/2;
    }
    return res;
}

int main() 
{
    int n = 6, m = 4,res;
    vector<int> arr = {0,3, 4, 7, 10, 9};
    res=aggressiveCows(arr,n,m);
    cout << "Pages:"<<res;
    return 0;
}
