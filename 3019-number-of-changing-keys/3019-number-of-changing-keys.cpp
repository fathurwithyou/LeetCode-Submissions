class Solution {
public:
    int countKeyChanges(string s) {
        int ans = 0;
        for(int i = 1; i < s.size(); i++){
            if(abs(s[i]-s[i-1]) != 32 && abs(s[i]-s[i-1]) != 0)ans++;
        }
        return ans;
    }
};