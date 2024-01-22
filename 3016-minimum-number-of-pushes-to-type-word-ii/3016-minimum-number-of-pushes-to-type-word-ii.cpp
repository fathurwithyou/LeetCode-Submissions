class Solution {
public:
    int minimumPushes(string word) {
        int cnt = 7, res = 0;
        int tab[27]={0};
        for(auto s : word){
            tab[s-'a']++;
        }
        sort(tab, tab+26, greater<int>());
        for(int i = 0; tab[i]!=0; i++){
            cnt++;
            res += cnt/8*tab[i];
        }
        return res;
    }
};