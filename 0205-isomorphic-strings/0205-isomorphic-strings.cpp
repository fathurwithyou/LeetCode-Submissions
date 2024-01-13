class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> umap;
        bool exist[300] = {0};
        for(int i = 0; i < s.size(); i++){
            if(umap.find(s[i]) == umap.end()){
                if(exist[t[i]-0]) return false;
                umap[s[i]] = t[i]; 
                exist[t[i]-0] = true;
            }
            else{
                if(umap[s[i]] != t[i]) return false;
            }
        }
    return true;
    }
};