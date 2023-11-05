class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;

        for(auto i: mp){
            if(i.second>nums.size()/2)
            ans=i.first;
        }
        return ans;
    }
};