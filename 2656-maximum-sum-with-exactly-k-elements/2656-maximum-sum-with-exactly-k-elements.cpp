class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int max = *max_element(nums.begin(), nums.end());
        return (k*k + (max*2-1)*k)/2;
    }
};