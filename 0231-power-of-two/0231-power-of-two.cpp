class Solution {
public:
    bool cek(int n){
        if(n==1) return true;
        while(n>1){
            if(n%2) return false;
            n/=2;
        }
        return true;
    }
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        if(cek(n)) return true;
        return false;
    }
};