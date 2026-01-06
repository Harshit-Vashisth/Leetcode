class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0,e=nums.size(),mid=0;
        int first=-1,last=-1;
        while(s<e){
            mid=s+(e-s)/2;
            cout<<mid;
            if(nums[mid]==target){
                first=mid;
                last=mid;
                while(first>0&&nums[first-1]==target)
                    first--;
                
                while(last<nums.size()-1&&nums[last+1]==target)
                    last++;
                    break;
            }
            else if(nums[mid]>target)
                e=mid;
            else 
                s=mid+1;
        }
        return {first,last};
    }
};