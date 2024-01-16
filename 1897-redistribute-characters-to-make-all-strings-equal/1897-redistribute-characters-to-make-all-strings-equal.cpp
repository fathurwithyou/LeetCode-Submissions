class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        int word[26] = {0};
        for(int i = 0; i < n; i++){
            for(auto x: words[i])
            word[x-'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(word[i]%n) return false;
        }
        return true;
    }
};