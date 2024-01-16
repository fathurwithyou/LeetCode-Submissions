class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        sort(nums.begin(), nums.end());
        int maxi = 0;
        for(int x : nums){
            mp[x]++;
            maxi = max(maxi, mp[x]);
        }
        vector<vector<int>> v(maxi);
        int prev =nums[0], idx = 1; 
        v[0].push_back(prev);
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != prev){
                prev = nums[i];
                v[0].push_back(prev);
                    idx = 1;
            }
            else{
                            v[idx].push_back(nums[i]);
            idx++;
            }

        }
        return v;
    }
};