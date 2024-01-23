class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n = min(min(s1.size(), s2.size()), s3.size());
        int i; bool same=true;
        for(i = 0; i < n; i++){
            if(s1[i] != s2[i] || s1[i] != s3[i] || s2[i] != s3[i]){same=false; break;}
        }
        // if(i < 2){
        //     if(same) return 0;
        //     return -1;
        // }
        if(i==0 && n >= 1 && !same) return -1; 
        return abs(i-(int)s1.size()) + abs(i-(int)s2.size()) + abs(i-(int)s3.size());
    }
};