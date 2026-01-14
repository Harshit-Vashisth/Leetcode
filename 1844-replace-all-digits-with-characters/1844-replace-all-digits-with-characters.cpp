class Solution {
public:
    string replaceDigits(string s) {
       for(int i=1;i<s.length();i+=2){
        s[i]=s[i-1]-'0'+s[i];
        cout<<i<<s[i];
       } 
       return s;
    }
};