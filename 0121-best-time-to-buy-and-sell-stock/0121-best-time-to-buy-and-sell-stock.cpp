class Solution {
public:
int ans=0;
    int price(vector<int>& p,int s,int mini){
        if(s>=p.size())
        return ans;
        if(p[s]<mini)
        mini=p[s];
        int k=p[s]-mini;
        if(k>ans)
        ans=k;
        return price(p,s+1,mini);
    }
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int s=0;
        return price(prices,s,mini);
    }
};