class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        ans.push_back(s[0]);
        for(int i=1;i<s.length();i++){
            if(ans.length()!=0&&ans[ans.length()-1]==s[i])
                ans.pop_back();
            else
                ans.push_back(s[i]);
        }
        return ans;
    }
};