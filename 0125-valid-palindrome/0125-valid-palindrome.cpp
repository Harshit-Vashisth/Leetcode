class Solution {
public:
    void lower(string& s){
        for(int i=0;i<s.length();i++){
            if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]-'A'+'a';
        }
    }
    bool isPalindrome(string s) {
        int i=0,e=s.length()-1;
        lower(s);
       
        while(i<e){
            while(i<=e&&(s[i]<'a'||s[i]>'z')&&!(s[i]>='0'&&s[i]<='9')){
                i++;
            }
            while(e>=0&&(s[e]<'a'||s[e]>'z')&&!(s[e]>='0'&&s[e]<='9')){
                cout<<"hi";
                e--;
            }
           if(e<i)
           return true;
           cout<<s[i]<<s[e]<<endl;
            if(s[i++]!=s[e--])
            return false;   
        }  
        return true;
    }
};