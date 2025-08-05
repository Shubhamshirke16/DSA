//bubbleSort using recursion
#include <iostream>
using namespace std;
#include<vector>
void bubbleSort(vector<int> &arr,int n)
{
    if(n==1)
    {
      return ;
    }
    for(int i=0;i<n-1;i++)
    {
      if (arr[i] > arr[i + 1])
      {
        swap(arr[i], arr[i + 1]);
      }
    }
    bubbleSort(arr,n-1);

}

int main() {
    vector<int> arr = {5, 1, 4, 2, 8};
    int n = arr.size();

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";

    return 0;
}
