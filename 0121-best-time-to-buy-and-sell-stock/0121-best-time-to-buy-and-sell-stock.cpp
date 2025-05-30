class Solution {
public:
int k=0;
    int solve(vector<int>& prices,int i,int n,int mini,int max){
        if(i>=n)
        return max;
        if(prices[i]<mini)
        mini=prices[i];
         k=prices[i]-mini;
        if(k>max)
        max=k;
        return solve(prices,i+1,n,mini,max);
    }
    int maxProfit(vector<int>& prices) {
        return solve(prices,0,prices.size(),INT_MAX,0);
    }
}; 
