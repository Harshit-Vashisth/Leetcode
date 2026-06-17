class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i =0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]&&mp[nums1[i]]!=1){
                mp[nums1[i]]=1;
                ans.push_back(nums1[i]);
                }
            }
        }
        return ans;
    }
};