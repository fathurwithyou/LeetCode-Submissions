class Solution {
public:
     int removeDuplicates(vector<int>& nums) {
	    auto end_unique = unique(nums.begin(), nums.end());
	    return end_unique-nums.begin();
 }
};