class Solution {
public:
    int minSteps(string s, string t) {
        int word[26] = {0};
        for(int i = 0; i < s.size(); i++){
            word[t[i]-97]++;
            word[s[i]-97]--;
        }
        int pos = 0, neg = 0;
        for(int i = 0; i < 26; i++){
            if (word[i] < 0) neg -= word[i];
            if (word[i] > 0) pos += word[i];
        }
        return min(pos, neg) + abs(pos-neg);
    }
};


