class Solution {
public:
    bool isVowel(char s){
        char vowel[10] = {'a', 'i', 'u','e','o','A','I','U','E','O'};
        for(int i = 0; i < 10; i++){
            if(s == vowel[i])        return true;

        }
        return false;
    }

    string reverseVowels(string s) {
        int l = 0, r = s.size()-1;
        while(l < r){
            if(!(isVowel(s[l]))) l++;
            else if(!(isVowel(s[r]))) r--;
            else{
                swap(s[l], s[r]);
                l++; r--;
            }
        }
        return s;
    }
};