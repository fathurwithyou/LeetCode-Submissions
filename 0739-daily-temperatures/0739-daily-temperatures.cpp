class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n);
        for(int i = n-2; i >= 0; i--){
            for(int j = i+1; j < n; j++){
                if(temperatures[i] == temperatures[j]){
                    if(ans[j])
                    ans[i] = ans[j] + j - i; break;
                    
                }
                if(temperatures[i] < temperatures[j]){
                    ans[i] = j - i; break;
                }
                if(temperatures[j] < temperatures[i]) j += ans[j]-(bool)(ans[j]*-1);
            }
        }
        return ans;
    }
};