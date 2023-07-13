class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev;
        prev.push_back(1);
        vector<int> cur;
        for(int i = 1; i <= rowIndex; i++){
            for(int j = 0; j <= i; j++){
                if(j==0 || j == i) cur.push_back(1);
                else cur.push_back(prev[j-1] + prev[j]);
            }
            prev = cur;
            cur.clear();
        }
        return prev;
    }
};