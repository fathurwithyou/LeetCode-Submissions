class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int cnt[10001] ={0};
        vector<int> res(2,-1);
        for(auto x: nums) cnt[x]++;
        for(int i = 1; i <= nums.size(); i++){
            if(cnt[i] >= 2) res[0] = i;
            if(cnt[i] == 0) res[1] = i;
            if(res[0] != -1 & res[1] != -1) break;
        }
        return res;
    }
};