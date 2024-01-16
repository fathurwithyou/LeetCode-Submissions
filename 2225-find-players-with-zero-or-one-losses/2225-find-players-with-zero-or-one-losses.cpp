class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       unordered_set<int> s; unordered_map<int, int> mp; int n = matches.size();
        vector<vector<int>> vvi(2);
        for(int i = 0; i < n; i++){
            s.insert(matches[i][0]);
            s.insert(matches[i][1]);
            mp[matches[i][1]]++;
        }
        vector<int> v(s.begin(), s.end());
        sort(v.begin(), v.end());
        for(int x : v){
            if(mp[x] == 0) vvi[0].push_back(x);
            if(mp[x] == 1) vvi[1].push_back(x);
            // cout << mp[x];
        }
        // for(int i = 0; i < vvi.size(); i++){
        //     for(int j = 0 ; j < vvi[i].size(); j++){
        //         cout << vvi[i][j] <<;
        //     }
        // }
        return vvi;
    }
};