sqrt(n) using binary search

class Solution {
public:

    int mySqrt(int x) {
        if(x==0) return 0;
        if(x<3) return 1;

        int start=1,end=x;
        long long ans=-1;

        long long int mid=start+(end-start)/2;
        
        while(start <= end)
        {
            if(mid*mid==x)
            {
                return mid;
            }
            else if(x<mid*mid)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
                ans=mid;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
};
