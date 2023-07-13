class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        while(x){
            int remainder = x % 10;
            res *= 10;
            res += remainder;
            x /= 10;
        }
        if(res > INT_MAX || res < INT_MIN) return 0;
        return res;
    }
};