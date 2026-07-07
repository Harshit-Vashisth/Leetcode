class Solution {
public:
    int divide(int div, int divisor) {
        long long int s=1,divd=abs((long long)div),mid=0,ans=0,d=abs((long long)divisor),e=divd;
        if(div==INT_MIN&&divisor==-1)
        return INT_MAX;
        if(div==divisor)
        return 1;
        if(divisor==1) return div;
        cout<<s<<e;
        while(s<=e){
            mid=s+(e-s)/2;
            cout<<mid;
            if(mid*d==divd){
                ans= mid;
                break;
            }
            else if(mid*d<divd){
                ans=mid;
                s=mid+1;
            }
            else
            e=mid-1;
        }
        if((div<0&&divisor<0)||(div>0&&divisor>0))
        return ans;

        return ans*-1;
    }
};