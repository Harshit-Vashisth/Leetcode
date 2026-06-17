class Solution {
public:
    void swap(int& a,int& b){
        int temp=a;
        a=b;
        b=temp;
    }
    void sortColors(vector<int>& nums) {
        int st=0,e=nums.size()-1,m=0;
        
        while(m<=e){
            if(nums[m]==0){
                swap(nums[st],nums[m]);
                st++;
                m++;
            }
            else if(nums[m]==1){
                m++;
            }
            else{
                swap(nums[m],nums[e]);
                e--;
            }
        }
    }
};