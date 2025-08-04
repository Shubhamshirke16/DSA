//linear Search using Recursion

#include <iostream>
using namespace std;
#include<vector>

bool linearSearch(vector<int> &arr,int index,int key){
  if(index==arr.size())
  {
    return false;
  }
  if(key==arr[index])
  {
    return true;
  }
  return linearSearch(arr,index+1,key);
}

int main() 
{
    vector<int> v={1,2,3,4,5};
    int key =9;
    cout<<"Found: "<<linearSearch(v,0,key);
    return 0;
}
