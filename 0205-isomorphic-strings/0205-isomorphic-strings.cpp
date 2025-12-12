class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp;
        map<char,char> mp1;
        for(int i=0;i<s.length();i++){
            if((mp[s[i]]||mp1[t[i]])&&mp[s[i]]!=t[i])
            return false;
            else
            {
                mp[s[i]]=t[i];
                mp1[t[i]]=s[i];
            }
        }
        return true;
    }
};