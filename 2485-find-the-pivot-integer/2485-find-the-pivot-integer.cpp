class Solution {
public:
    int sum(int s,int e){
        int sum=0;
        for(int i=s;i<=e;i++){
            sum+=i;
        }
        return sum;
    }
    int pivotInteger(int n) {
        if(n==1)
        return 1;
        int s=0,e=n;
        int mid=0;
        while(s<e){
            mid=s+(e-s)/2;
            int left=sum(1,mid);
            int right=sum(mid,n);
            if(left==right)
            return mid;
            if(left<right)
                s=mid+1;
            else 
                e=mid-1;
            
        }
        return -1;
    }
};