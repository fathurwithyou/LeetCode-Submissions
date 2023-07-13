class Solution {
public:
    bool isPalindrome(long long x) {
        bool cek = true;
        string s = to_string(x);
        int len = s.length();
        for (int i = 0, x = len-1; i < len; i++){
            if (s[i] != s[x]){
            	cek = false;
                return cek;
			}
            x--;
        }
        return cek; 
    }
};