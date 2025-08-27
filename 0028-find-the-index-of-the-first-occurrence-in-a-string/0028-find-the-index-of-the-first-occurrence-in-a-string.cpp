class Solution {
public:
    int s=0,e=0;
    int solve(string haystack,string  needle,int p){
        if(s+p-1>e)
        return -1;
        if(haystack.substr(s,p)==needle)
        return s;
        else 
        s++;
        return solve(haystack,needle,p);
    }
    int strStr(string haystack, string needle) {
       e=haystack.size()-1;
       int p=needle.size();
        return solve(haystack,needle,p);
    }
};