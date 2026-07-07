class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //here we can see a trend odd is the first occ even is the second
        if(nums.size()==1)
        return nums[0];
        int s=0,e=nums.size()-1,mid=0;
        while(s<=e){
            mid=s+(e-s)/2;
            if(mid%2==0){
                if((mid-1>=0)&&nums[mid]!=nums[mid-1]){
                    if((mid+1>=0)&&nums[mid]!=nums[mid+1])
                    return nums[mid];
                    else
                    s=mid+1;
                }
                else
                    e=mid-1;
            }
            else{
                if((mid+1>=0)&&nums[mid]==nums[mid+1])
                    e=mid-1;
                else
                s=mid+1;
            }
        }
        return nums[s];
    }
};