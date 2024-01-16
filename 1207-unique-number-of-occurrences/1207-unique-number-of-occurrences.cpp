class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_map<int, int> cnt;
        for(auto x:arr) mp[x]++;
        for (auto& it: mp){
            if(cnt.count(it.second)) return false;
            else cnt[it.second] = 1;
        }
        return true;
    }
};