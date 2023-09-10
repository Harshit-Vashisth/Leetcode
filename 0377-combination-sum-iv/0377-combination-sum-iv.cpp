class Solution {
public:
int solve(vector<int>& nums,int target,vector<int>& dp){
       if(target==0){
        return 1;
        }
        if(dp[target]!=-1){
       return dp[target];
        }
    dp[target]=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<=target)
        dp[target]+=solve(nums,target-nums[i],dp);
    }
    return dp[target];
}
    int combinationSum4(vector<int>& nums, int target) {
    vector<int> dp(target+2,-1);
    return solve(nums,target,dp);
    }
};