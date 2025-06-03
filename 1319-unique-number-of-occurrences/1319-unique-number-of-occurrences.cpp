class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_map<int,int> check;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto i: mp){
            if(check[i.second]==1)
            return false;
            else
            check[i.second]++;
        }
        return true;
    }
};