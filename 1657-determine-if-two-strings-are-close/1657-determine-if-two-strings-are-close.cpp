class Solution {
public:
    bool isAble(string s, string t){
        if(s.size() != t.size()) return false;
        int word[26] = {0}, words[26] = {0};
        for(char x : s)word[x-97]++;        
        for(char x : t)words[x-97]++;
        for(int i = 0; i < 26; i++) if(bool(word[i]) != bool(words[i])) return false;

        sort(word, word+26);
        sort(words, words+26);
        for(int i = 0; i < 26; i++) if(word[i] != words[i]) return false;
        return true;
    }
    
    
    bool closeStrings(string word1, string word2) {
        if(isAble(word1, word2)) return true;
        return false;
    }
};