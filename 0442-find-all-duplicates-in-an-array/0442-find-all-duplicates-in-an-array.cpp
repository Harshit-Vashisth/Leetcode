class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i =0;i<nums.size();i++){
            if(mp[nums[i]]!=-1)
            mp[nums[i]]=-1;
            else
            ans.push_back(nums[i]);
        }
        return ans;
    }
};