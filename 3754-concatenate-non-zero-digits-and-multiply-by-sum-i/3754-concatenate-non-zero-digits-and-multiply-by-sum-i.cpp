class Solution {
public:
    long long sumAndMultiply(int n) {
        long long int x=0,ans=0, sum=0,num=0,x1=0;
        while(n!=0){
            if(n%10!=0){
            num=n%10;
            x=x*10+num;
            sum+=num;}
            n=n/10;
        }
        while(x!=0){
            x1=x1*10+x%10;
            x=x/10;
        }
        return x1*sum;
    }
};