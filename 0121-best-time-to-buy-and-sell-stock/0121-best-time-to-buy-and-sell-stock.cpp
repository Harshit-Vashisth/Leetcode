class Solution {
public:
    int solve(vector<int>& prices,int i,int n,int maxi,int mini){
        if(i>n)
        return maxi;
        if(prices[i]<mini)
            mini=prices[i];
        int k=prices[i]-mini;
        if(k>maxi)
        maxi=k;
        return solve(prices,i+1,n,maxi,mini);
    }
    int maxProfit(vector<int>& prices) {
        if(prices.empty())
        return 0;
        int maxi=0,mini=INT_MAX;
        return solve(prices,0,prices.size()-1,maxi,mini);
    }
};