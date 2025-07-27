 // Allocate Books to studnet usin Binray Search

#include <iostream>
using namespace std;
#include<vector>

bool isPossible(vector<int> &arr,int n,int m,int mid)
{
  int studcount=1;
  int pageSum=0;
  
  for(int i=0; i<n;i++)
  {
    if(pageSum+arr[i]<=mid)
    {
      pageSum+=arr[i];
    }
    else
    {
      studcount++;
      if(studcount>m || arr[i]>mid){
        return false;
      }
      pageSum=arr[i];
    }
  }  
  
  return true;

}

int findPages(vector<int>& arr, int n, int m) {
  int s=0;
  int sum=0;
  for(int i=0; i<n;i++)
  {
    sum=sum+arr[i];
  }
  int e=sum;
  int ans=-1;
  
  int mid=s+(e-s)/2;
  
  while(s<=e)
  {
    if(isPossible(arr,n,m,mid))
    {
      ans=mid;
      e=mid-1;
    }
    else
    {
      s=mid+1;
    }
    mid=s+(e-s)/2;
  }
  
  return ans;
}

int main() 
{
    int n = 4, m = 2,res;
    vector<int> arr = {12, 34, 67, 90};
    res=findPages(arr,n,m);
    cout << "Pages:"<<res;
    return 0;
}

