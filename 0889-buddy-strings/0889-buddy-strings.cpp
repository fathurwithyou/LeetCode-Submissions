class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int cnt = 0;
        int same[26]={0};
        if(s.size() != goal.size()) return false;
        if(s == goal){
            for(int i = 0; i < s.size(); i++){
                same[s[i]-97]++;
                if(same[s[i]-97] >= 2) return true;
            }
            return false;
        }
        for(int i = 0; i < s.size(); i++){
            same[s[i]-97]++;
            same[goal[i]-97]--;
            if(s[i] != goal[i]) cnt++;
            if(cnt > 2) return false;
        }
        for(int i = 0; i < 26; i++){
            if(same[i] != 0) return false;
        }
        return true;
    }
};