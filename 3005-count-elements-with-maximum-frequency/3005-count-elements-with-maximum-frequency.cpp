class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxi = 0, res=0;
        for(int x:nums){
            mp[x]++;
            maxi = max(maxi, mp[x]);
        }
        for(auto x:mp){
            if(x.second == maxi) res++;
        }
        return res*maxi;
    }
};