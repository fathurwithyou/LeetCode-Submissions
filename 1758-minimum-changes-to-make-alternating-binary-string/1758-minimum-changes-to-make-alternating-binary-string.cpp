class Solution {
public:
    int minOperations(string s) {
        int one=0, zero=0;
        for(int i = 0; i < s.size(); i++){
            if(i%2){
                if(s[i] != '1') zero++;
                else one++;
            }
            
            else{
                if(s[i] != '0') zero++;
                else one++;
            }
        }
        return min(one, zero);
    }
};