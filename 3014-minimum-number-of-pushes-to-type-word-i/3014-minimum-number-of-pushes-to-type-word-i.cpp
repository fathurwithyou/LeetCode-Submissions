class Solution {
public:
    int minimumPushes(string word) {
        int cnt = 7, res=0;
        for(auto c : word){
            cnt++;
            res += cnt/8;
        }
        return res;
    }
};