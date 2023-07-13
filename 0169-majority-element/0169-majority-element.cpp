class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = 0, maxi = 0;
        unordered_map<long long, long long> umap;
        for(int i = 0; i < nums.size(); i++){
            umap[nums[i]]++;
            if(umap[nums[i]] > maxi){
                major = nums[i];
                maxi = umap[nums[i]];
            }
        }
        return major;
    }
};