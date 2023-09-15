class Solution {
public:
      int solve(int i ,int n ,vector<int>& prices,int sum){
        if(i>=prices.size())
        return sum;
        sum+=max(prices[i]-prices[i-1],0);
        return solve(i+1,prices.size(),prices,sum);
    }
    int maxProfit(vector<int>& prices) {
        return solve(1,prices.size(),prices,0);
    }
};