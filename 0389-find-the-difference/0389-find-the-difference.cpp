class Solution {
public:
   char findTheDifference(string s, string t) {
       int i=0;char ans;
       map<char,int> c;
        map<char,int> st;
        for(i=0;i<t.length();i++){
            c[t[i]]++;
            st[s[i]]++;
        }
       for(i=0;i<t.length();i++){
           if(c[t[i]]>st[t[i]]){
            ans=t[i];
            break;
            }
       }
       
        return ans;
    }
};