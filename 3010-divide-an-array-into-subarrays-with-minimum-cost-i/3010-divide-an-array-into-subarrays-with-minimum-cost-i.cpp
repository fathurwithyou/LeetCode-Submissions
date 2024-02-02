class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int mini[2] = {50, 50};
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < mini[0]){
                mini[1] = mini[0];
                mini[0] = nums[i];
            }
            else if(nums[i] < mini[1]) mini[1] = nums[i];
        }
        return nums[0]+mini[0]+mini[1];
    }
};