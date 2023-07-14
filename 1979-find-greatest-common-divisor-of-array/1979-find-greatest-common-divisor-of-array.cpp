class Solution {
public:
    int gcd(int a, int b){
        if(a==0) return b;
        return gcd(b%a, a);
    }

    int findGCD(vector<int>& nums) {
        int mini = 1000, maxi = 1;
        for(int i = 0; i < nums.size(); i++){
            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);
        }
        return gcd(mini, maxi);
    }
};