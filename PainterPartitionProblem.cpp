 //Painter's Partition Problem using Binray Search


bool isPosible(vector<int> &arr,int mid,int k)
{
    int tasksum=0;
    int painterCount=1;
    for(int i=0;i<arr.size();i++)
    {
        if(tasksum+arr[i]<=mid)
        {
            tasksum+=arr[i];
        }
        else{
            painterCount++;
            if(painterCount > k || arr[i] > mid)
            {
                return false;
            }
            tasksum=arr[i];
        }

    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s=0;
    int sum=0;
    for(int i=0; i<boards.size();i++)
    {
        sum=sum+boards[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(isPosible(boards,mid,k))
        {
            e=mid-1;
            ans=mid;
        }
        else {
            s=mid+1;
        }

        mid=s+(e-s)/2;
    }
    return ans;
}
