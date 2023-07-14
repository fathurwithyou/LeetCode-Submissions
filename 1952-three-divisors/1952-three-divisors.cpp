class Solution {
public:
    bool isThree(int n) {
        int cnt = 2;
        for(int i = 2; i*i <= n; i++){
            if(n%i==0 && i*i!=n) return false;
            if(i*i==n) cnt++;
        }
        if(cnt==3)
            return true;
        return false;
    }
};