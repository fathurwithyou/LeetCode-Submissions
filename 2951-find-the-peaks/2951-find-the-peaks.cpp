class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> ans;
        mountain.push_back(100);
        mountain.insert(mountain.begin(),100);
        for(int i = 1; i < mountain.size()-2; i++){
            if(mountain[i] > mountain[i-1] && mountain[i] > mountain[i+1]) ans.push_back(i-1);
        }
        return ans;
    }
};