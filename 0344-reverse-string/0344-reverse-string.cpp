class Solution {
public:
    void solve(vector<char>& s,int st,int e){
        if(st>e)
        return;
        swap(s[st++],s[e--]);
        solve(s,st,e);
    }
    void reverseString(vector<char>& s) {
        int st=0,e=s.size()-1;
        solve(s,st,e);
    }
};