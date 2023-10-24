class Solution {
public:
    int recursion(int n){
        if(n==0||n==1)
            return n;
        return (recursion(n-2)+recursion(n-1));
    }
    int topdown(int n,vector<int>& dp){
        if(n==0||n==1)
            return n;
        if(dp[n]!=-1)
        return dp[n];
        dp[n]=topdown(n-2,dp)+topdown(n-1,dp);
        return dp[n];
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return topdown(n,dp);
    }
};