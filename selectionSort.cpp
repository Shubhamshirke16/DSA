//selectionSort

#include <iostream>
using namespace std;
#include<vector>
#include <algorithm>



void  selectionSort(vector<int> &arr, int n )
{
  for(int i=0;i<n;i++)
  {
    int minIndex=i;
    
    for(int j=i+1;j<n;j++)
    {
      if(arr[j] < arr[minIndex])
      {
        minIndex=j;
      }
    }
    swap(arr[minIndex],arr[i]);
  }
}

int main() 
{
    int n=6;
    vector<int> arr = {0,3, 4, 7, 10, 9};
    selectionSort(arr, n);
    for(int i=0;i<n;i++)
    {
      cout <<arr[i]<<endl;
    }
    return 0;
}
