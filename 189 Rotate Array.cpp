// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int s=nums.size();
        vector<int> temp(s);
        k = k % s;

        for(int i=0;i<s;i++)
        {
            temp[(i+k)%s]=nums[i];
        }
        nums=temp;
    }
};
