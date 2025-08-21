class Solution {
public:
int reminder=0;
int sum=0;
    int minMoves(int target, int maxDoubles) {
        if(target<maxDoubles)
        return 0;
        
        while(maxDoubles!=0&&target>=2){
            if(target%2!=0)
            reminder++;
                target=target/2;
                sum++;
                maxDoubles--;
        }
        sum+=target;
        return sum+reminder-1;
    }
};