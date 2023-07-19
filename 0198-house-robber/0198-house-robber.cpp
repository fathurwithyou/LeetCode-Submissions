class Solution {
public:
    int tab[101];
    int findMax(vector<int>& nums, int idx){
        if(idx < 0) return 0;
        if(tab[idx] >= 0) return tab[idx];
        return tab[idx] = max(findMax(nums, idx-2)+nums[idx], findMax(nums, idx-1));
        
    }   
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        memset(tab, -1, sizeof(tab));
        return findMax(nums, n-1);
    }
};