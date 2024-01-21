class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(2, 0);
        int cnt1[101] = {0}, cnt2[101] = {0}, count1=0, count2=0;
        for(int i = 0; i < nums1.size(); i++){
            cnt1[nums1[i]]++;
        }
        for(int i = 0; i < nums2.size(); i++){
            cnt2[nums2[i]]++;
        }
        for(int i = 0; i < nums1.size(); i++){
            if(cnt2[nums1[i]]){count1++;}
        }
        for(int i = 0; i < nums2.size(); i++){
            if(cnt1[nums2[i]]){count2++;}
        }
        ans[0] = count1;
        ans[1] = count2;
        return ans;
    }
};