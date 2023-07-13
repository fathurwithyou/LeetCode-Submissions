class Solution {
public:
    int dp(vector<int>& nums, int target, int idx){
        if(idx < 0 && target ==0) return 1;
        if(idx < 0) return 0;

        int pos = dp(nums, target-nums[idx], idx-1);
        int neg = dp(nums, target+nums[idx], idx-1);

        return pos+neg;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int start = nums.size()-1;
        return dp(nums, target, start);
    }
};