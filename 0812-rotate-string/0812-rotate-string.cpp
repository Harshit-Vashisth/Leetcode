class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
            return false;
        if(s==goal)
            return true;
        int l=goal.length();
        while(l--){
            if(s==goal)
                return true;
            s=s.substr(1)+s[0];
        }
        return false;
    }
};