1752. Check if Array Is Sorted and Rotated

class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
        int s=nums.size();
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>nums[i])
            {
                count++;
            }
        }

        if(nums[s-1]>nums[0])
        {
            count++;
        }

        if(count>1)
        {
            return false;
        }
        return true;
    }
};
