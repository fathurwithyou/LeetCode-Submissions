class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int back = nums.size()-1;
        int count = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == val)
            {
                count++;
                if(nums[back]!=val)
                {
                  nums[i] = nums[back]; 
                }
                else{
                    while(nums[back] == val && back>0)
                    {
                        back--;
                    }
                    // replace val with element from back
                    nums[i] = nums[back];
                }
                if(back>0)
                back--;
                
            }
        }
        return nums.size()-count;
    }
};