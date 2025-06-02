class Solution {
public:
    int findMiddleIndex(vector<int>& arr) {
          int s1=0,s2=0;
       for(int i =0;i<arr.size();i++){
            s1+=arr[i];
        }
        for(int i =0;i<arr.size();i++){
            s1-=arr[i];
            if(s1==s2)
            return i;
            s2+=arr[i];
        }
          return -1;
    }
};