//Search In Rotated Sorted Array

int pivot(vector<int>& a,int n) {
  int start = 0;
  int end = n - 1;
  while (start < end) 
  {
    int mid = start + (end - start) / 2;
    if (a[mid] >= a[0])
      start = mid + 1;
    else
      end = mid;
  }
  return start;  // or return end; both point to the pivot
}

int binaryserach(vector<int>& a,int k,int s,int e)
{
  int start=s;
  int end=e;
  int mid=start+(end-start)/2;
  
  while(start <= end)
  {
    if(a[mid]==k)
    {
      return mid;
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

int search(vector<int>& arr, int n, int k)
{
    int p=pivot(arr,n);
    if(k>=arr[p] && k<=arr[n-1])
    {
        return binaryserach(arr,k,p,n-1);
    }
    else{
        return binaryserach(arr,k,0,p-1);
    }
}
