class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans(2);
        int n = grid.size();
        int count[2501] ={0};
        for(auto x: grid){
            for(int num: x){
                count[num]++;
                if(count[num] >= 2) ans[0] = num;
            }
        }
        for(int i = 1;i <= n*n; i++)
            if(count[i] == 0){
                ans[1] = i; break;
            }
        return ans;
    }
};