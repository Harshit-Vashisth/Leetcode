class Solution {
public:
    bool check(string s,int i,int e){
        
        while(i<=e){
            if(s[i++]!=s[e--])
            return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        if(s.length()==1)
        return true;
        int i=0,e=s.length()-1;
        while(i<=e){
            if(s[i]!=s[e]){
                return (check(s,i+1,e))||(check(s,i,e-1));
            }
            else 
            {
                i++;
                e--;
            }
        }
        return true;
    }
};