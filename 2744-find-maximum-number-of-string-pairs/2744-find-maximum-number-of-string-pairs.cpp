class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string, int> umap;
        int ans = 0;
        for(int i = 0; i < words.size(); i++){
            reverse(words[i].begin(), words[i].end());
            if(umap.count(words[i])) 
                umap[words[i]]++;
            else {            reverse(words[i].begin(), words[i].end());
umap[words[i]]++;}
        }
        for(auto &[a, b]: umap) ans += b/2;
        return ans;
    }
};