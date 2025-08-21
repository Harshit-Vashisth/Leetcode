class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long int sum=0,count =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        long int  diff=abs(goal-sum);
       if(diff%limit==0)
       return (int)(diff/limit);
       return (int)(diff/limit+1);
        // or return (diff+limit-1)/limit  one linears
    }
};