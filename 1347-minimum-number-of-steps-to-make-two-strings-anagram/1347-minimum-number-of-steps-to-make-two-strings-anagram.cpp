class Solution {
public:
    int minSteps(string s, string t) {
        int word[26] = {0};
        for(auto i : t)word[i-97]++;
        for(auto i : s)word[i-97]--;
        int pos = 0, neg = 0;
        for(int i = 0; i < 26; i++){
            if (word[i] < 0) neg -= word[i];
            if (word[i] > 0) pos += word[i];
        }
        int ans = min(pos, neg) + abs(pos-neg);
        return ans;
    }
};