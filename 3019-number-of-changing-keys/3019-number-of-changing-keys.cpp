class Solution {
public:
    int countKeyChanges(string s) {
        int ans = 0;
        for(int i = 1; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                if(s[i-1] != s[i] && s[i]-s[i-1] != 32) ans++;
            }
            else{
                if(s[i-1] != s[i] && s[i-1]-s[i] != 32) ans++;
            }
        }
        return ans;
    }
};