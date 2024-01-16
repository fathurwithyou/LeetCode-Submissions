class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero = 0; long long mul = 1; vector<int> v;
        for(auto x : nums){
            if(!x) zero++;
            else mul *= x;
            if(zero >= 2) return vector<int> (nums.size(),0);
        }
        for(int i = 0; i < nums.size(); i++){
            if(zero){
                if(!nums[i]) v.push_back(mul);
                else v.push_back(0);
            }
            else{
                v.push_back(mul/nums[i]);
            }
        }
        return v;
    }
};