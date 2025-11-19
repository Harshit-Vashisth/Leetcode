class Solution {
public:
    int expand(string s, int i, int j){
        int count=0;
        while(i>=0&&j<s.length()&& s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count=0;
        for(int i =0;i<s.length();i++){
            //odd
            int odd=expand(s, i,i);
            //even
            int even=expand(s, i,i+1);
            count+=odd;
            count+=even;
        }
        return count;
    }
};