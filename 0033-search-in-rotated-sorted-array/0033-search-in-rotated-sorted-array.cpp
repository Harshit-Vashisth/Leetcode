class Solution {
public:
    int peek(vector<int>& nums){
        int s=0,e=nums.size()-1,mid=s+(e-s)/2;
        while(s<=e){
            mid=s+(e-s)/2;
            if((mid-1>=0)&&nums[mid]<nums[mid-1])
            return mid-1;
            if(mid+1<nums.size()&&nums[mid]>nums[mid+1])
             return mid;
            if(nums[s]>=nums[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int s, int e,int target){
        int mid=s+(e-s)/2;
        cout<<s<<e<<endl;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target)
            return mid;
            else if (nums[mid]<target){
                s=mid+1;
            }
            else 
            e=mid-1;
            
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        
        int p=peek(nums);
        cout<<p<<endl;
        if(target==nums[0])
        return 0;
        if(p==-1)
        return  search(nums,0,nums.size()-1,target);
        if(target<=nums[p]&&target>=nums[0]){
            return search(nums,0,p,target);
        }
        else {
            //right
            return search(nums,p+1,nums.size()-1,target);
        }
        return -1;
    }
};