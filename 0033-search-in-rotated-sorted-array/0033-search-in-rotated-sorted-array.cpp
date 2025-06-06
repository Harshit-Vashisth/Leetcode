class Solution {
public:
    int peak(vector<int>& arr) {
        int e=arr.size()-1;
        int s=0;
        int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(mid-1>=0&&arr[mid]<arr[mid-1]){
                return mid-1;
            }
            if(mid+1<arr.size()&&arr[mid]>arr[mid+1]){
                return mid;
            }
            if(arr[s]>=arr[mid])
            e=mid-1;
            else s=mid+1;
        }
          return -1;
    }
    int binarysearch(vector<int> arr, int s, int e,int target){
        int mid=0;
        while(s<=e){
            mid=s+(e-s)/2;
            if(arr[mid]==target)
            return mid;
            else if(arr[mid]<target)
            s=mid+1;
            else 
            e=mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int p=peak(nums);
        cout<<p;
        if(target==nums[0])
        return 0;
        if(p==-1)
         return binarysearch(nums,0,nums.size()-1,target);
   
        if(target>=nums[0]&&target<=nums[p])
        return binarysearch(nums,0,p,target);
        else
        return binarysearch(nums,p+1,nums.size()-1,target);
    }
};