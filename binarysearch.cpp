#include <iostream>
using namespace std;

int binaryserach(int a[],int k,int s)
{
  int start=0;
  int end=s-1;
  int mid=start+(end-start)/2;
  
  while(start <= end)
  {
    if(a[mid]==k)
    {
      return mid+1;
    }
    else if(a[mid]>k)
    {
      end=mid-1;
    }
    else
    {
      start=mid+1;
    }
    mid=start+(end-start)/2;
  }
  
  return -1;
}

int main() 
{
  int a[6]={1,6,23,33,55,99},k=9,res;
  int n = 6;
  res=binaryserach(a,k,n);
  
  cout << res;
  return 0;
}
