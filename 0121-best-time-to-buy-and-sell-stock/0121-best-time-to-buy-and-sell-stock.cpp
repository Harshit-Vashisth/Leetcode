class Solution {
public:
int ans=0;
    int solve(vector<int>& prices,int s,int mini){
        if(s>=prices.size())
        return ans;
        if(prices[s]<mini)
        mini=prices[s];
        int k=prices[s]-mini;
        if(k>ans)
        ans=k;
        return solve(prices,s+1,mini);
    }
    int maxProfit(vector<int>& prices) {
        int s=0,mini=INT_MAX;
        return solve(prices,s,mini);
    }
};