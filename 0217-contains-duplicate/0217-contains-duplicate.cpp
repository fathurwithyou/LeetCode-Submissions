class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> umap;
        for(int i = 0; i < nums.size(); i++){
            if(umap[nums[i]] != 0) return true;
            umap[nums[i]]++;
        }
        return false;
    }
};