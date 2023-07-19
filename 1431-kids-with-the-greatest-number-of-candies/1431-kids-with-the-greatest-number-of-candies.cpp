class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> arr;
        int maxi = *max_element(candies.begin(), candies.end());
        for(int i = 0; i < candies.size(); i++){
            if(candies[i]+extraCandies >= maxi) arr.push_back(true);
            else arr.push_back(false);
        }
        return arr;
    }
};