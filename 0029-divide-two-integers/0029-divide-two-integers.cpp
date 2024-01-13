class Solution {
public:
    int divide(int dividend, int divisor) {
        long long ans = (long long) dividend/divisor;
        if (ans > pow(2, 31) - 1) ans = pow(2, 31) - 1;
        if (ans < -1*pow(2, 31)) ans = -1*pow(2, 31);
        return ans;
    }
};