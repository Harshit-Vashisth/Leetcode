class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1)
        return x;
        int e=x/2;
        int s=1,mid=0,ans=0;
        while(s<=e){
            mid=s+(e-s)/2;
           if(x/mid>=mid){
            ans=mid;
            s=mid+1;}
            else 
            e=mid-1;
        }
        return ans;
    }
};