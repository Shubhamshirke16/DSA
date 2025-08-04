//arraySum using recursion

#include <iostream>
using namespace std;
#include<vector>

int sumArray(vector<int> &arr,int index){
  if(index==arr.size())
  {
    return 0;
  }
  return arr[index]+sumArray(arr, index+1);
}

int main() 
{
    vector<int> v={1,2,3,4,5};
    cout<<"sum: "<<sumArray(v,0);
    return 0;
}
