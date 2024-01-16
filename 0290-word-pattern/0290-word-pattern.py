class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        s = s.split()
        if len(s) != len(pattern): return False
        mp = {}
        dct = {}
        for i in range(len(pattern)):
            if pattern[i] in mp:
                if mp[pattern[i]] != s[i] or dct[s[i]] != pattern[i]: 
                    return False 
            else: 
                if s[i] not in dct:
                    mp[pattern[i]] = s[i]
                    dct[s[i]] = pattern[i]
                else: return False
        return True;