class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for (auto i: mp){
            if(i.second%2!=0)
            maxi=max(maxi,i.second);
            else mini=min(mini,i.second);
        }
        cout<<maxi<<mini;
        return maxi-mini;
    }
};