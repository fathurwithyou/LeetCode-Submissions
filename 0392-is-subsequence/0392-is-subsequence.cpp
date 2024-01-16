class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() > t.size()) return false;
        int st = 0, cnt =0;
        for(int i = 0; i < s.size(); i++){
            for(int j = st; j < t.size(); j++){
                if(s[i] == t[j]){
                    st = j+1;
                    cnt++;
                    break;
                }
                if(j == t.size()-1) return false;
            }
        }
        if(cnt == s.size()) 
        return true;
        return false;
    }
};