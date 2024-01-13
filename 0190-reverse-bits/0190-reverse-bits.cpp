class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        long long ans = 0, i = 31;
        while(n > 0){
            if(n%2) ans += pow(2,i);
            i--;
            n/=2;
        }
    return ans;
    }
};