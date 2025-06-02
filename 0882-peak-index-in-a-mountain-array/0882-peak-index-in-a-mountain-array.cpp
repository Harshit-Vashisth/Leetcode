class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int e=arr.size()-1;
        int s=0;
        int mid;
        while(s<e){
            mid=s+(e-s)/2;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else if(arr[mid]>arr[mid+1]){
                e=mid;
            }
        }
          return s;
    }
};