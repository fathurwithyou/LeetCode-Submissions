class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int cnt[101] = {0}, maxi = 0, res=0;
        for(int x:nums){
            cnt[x]++;
            maxi = max(maxi, cnt[x]);
        }
        for(int i = 1; i <= 100; i++){
            if(maxi == cnt[i]) res++;
        }
        return res*maxi;
    }
};