class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        for(int i =0;i<nums.size();i++){
             if(mp[nums[i]]!=-1)
            mp[nums[i]]=-1;
            else
           return nums[i];
        }
        return 0;
    }
};