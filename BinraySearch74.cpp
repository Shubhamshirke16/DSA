//BinraySearch using Recursion
#include <iostream>
using namespace std;
#include<vector>

bool BinraySearch(vector<int> &arr,int s,int e,int key)
{
  if(s>e)
  {
    return false;
  }
  int mid=s+(e-s)/2;
  
  if(key==arr[mid])
  {
    return true;
  }
  
  if(key<arr[mid])
  {
    return BinraySearch(arr,s,mid-1,key);
  }
  if(key>arr[mid])
  {
    return BinraySearch(arr,mid+1,e,key);
  }
}

int main() 
{
    vector<int> v={1,2,3,4,5};
    int key =3;
    cout<<"Found: "<<BinraySearch(v,0,v.size()-1,key);
    return 0;
}
