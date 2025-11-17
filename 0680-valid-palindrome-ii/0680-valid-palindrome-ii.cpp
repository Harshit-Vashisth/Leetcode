class Solution {
public:
    bool check(string s,int st,int e){
        while(st<=e)
        {
            if(s[st]!=s[e])
            return false;
            st++;
            e--;
        }
        return true;
    }
    bool validPalindrome(string s) {
       
        int st=0,e=s.length()-1;
        while(st<=e){
            if(s[st]!=s[e])
            {
                return check(s,st+1,e) ||check(s,st,e-1);
            }
            else{
                st++;
                e--;
            }
            
        }
        return true;
    }
};