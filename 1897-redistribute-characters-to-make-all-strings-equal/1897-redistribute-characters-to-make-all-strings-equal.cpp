class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int word[26] = {0};
        for(int i = 0; i < words.size(); i++){
            for(auto x: words[i])
            word[x-'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(word[i]%words.size()) return false;
        }
        return true;
    }
};