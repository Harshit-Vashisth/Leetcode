class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        if(x==0||x==1)
        return x;
        int mid,ans=0;
        while(s<e){
            mid=s+(e-s)/2;
            if(x/mid>=mid){
                ans=mid;
                s=mid+1;
            }
            else e=mid;
        }
        return ans;
    }
};