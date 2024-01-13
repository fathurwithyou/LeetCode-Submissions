class Solution {
public:
    bool isUgly(int n) {
        if(n==0) return false;
        int fac[3] = {2,3,5};
        int i = 0;
        while(i < 3){
            if(n%fac[i]) i++;
            else
                n/=fac[i];
            
        }
        if(n==1) return true;
        return false;
    }
};