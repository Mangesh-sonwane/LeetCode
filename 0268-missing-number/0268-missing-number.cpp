class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedNumber = n*(n+1)/2;
        int actualSum = 0;

        for(int i=0;i<n;i++){
            actualSum += nums[i];
        }

        return expectedNumber - actualSum;
    }
};