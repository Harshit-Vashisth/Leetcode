class Solution {
public:
    int first(vector<int>& nums,int target,int s,int e){
        if(nums.size()==0)
        return -1;
        int ans=-1;
        int mid=s+(e-s)/2;
        while(s<=e){
           
            mid=s+(e-s)/2;
            if(nums[mid]==target){
            e=mid-1;
            ans=mid;}
            else if(target>nums[mid])
            s=mid+1;
            else
            e=mid-1;
        }
        return ans;
    }
    int last(vector<int>& nums,int target,int s,int e){
        if(nums.size()==0)
        return -1;
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
            s=mid+1;
            ans=mid;}
            else if(target>nums[mid])
            s=mid+1;
            else
            e=mid-1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(first(nums,target,0,nums.size()-1));
        ans.push_back(last(nums,target,0,nums.size()-1));
        return ans;
    }
};