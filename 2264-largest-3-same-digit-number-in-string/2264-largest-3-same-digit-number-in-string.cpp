class Solution {
public:
    string largestGoodInteger(string num) {
        int good = -1, prev=num[0]-'0', cnt = 1;
        for(int i = 1; i < num.size(); i++){
            int nums = num[i]-'0';
            if(nums == prev) cnt++;
            else{
                prev = nums; cnt = 1;
            }
            if((cnt == 3) && (nums > good)) good = nums;
        }
        if(good==-1) return "";
        if(!good) return "000";
        return to_string(good*111);
    }
};