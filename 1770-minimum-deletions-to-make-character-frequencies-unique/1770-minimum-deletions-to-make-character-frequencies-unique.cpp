class Solution {
public:
    int minDeletions(string s) {
       int ans=0;
       map<char,int> mp;
       for(int i=0;i<s.length();i++){
           mp[s[i]]++;
       }
       map<int,bool> check;
       for(auto i:mp){
           if(check[i.second]==true){
               for(int count=i.second-1;count>=0;count--){
                   if(count==0){
                        ans+=i.second; break;}
                   if(!check[count]){
                        ans+=i.second-count;
                        check[count]=true;
                        break;
                        }
               }
           }
           else
           check[i.second]=true;
       }
       return ans;
    }
};