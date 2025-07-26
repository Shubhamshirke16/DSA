//724. Find Pivot Index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int t=0,sum1=0,sum2=0;

        for(int i=0;i<nums.size();i++)
        {
            t=t+nums[i];
        }
        sum1=t;
        for(int i=0;i<nums.size();i++)
        {
            sum1=sum1-nums[i];

            if(sum1==sum2)
            {
                return i;
            }
            sum2=sum2+nums[i];
        }

        return -1;

    }
};
