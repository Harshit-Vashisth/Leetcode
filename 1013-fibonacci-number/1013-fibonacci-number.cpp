class Solution {
public:
    int solve(int n){
        if(n==0 || n==1)
            return n;
        vector<int> dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
            dp[i]=dp[i-2]+dp[i-1];
        return dp[n];
    }
    int fib(int n) {
        return solve(n);
    }
};