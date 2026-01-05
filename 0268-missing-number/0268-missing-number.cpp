class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>  count(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for(int i=0;i<=nums.size();i++){
            if(count[i]==0)
            return i;
        }
        return -1;
    }
};