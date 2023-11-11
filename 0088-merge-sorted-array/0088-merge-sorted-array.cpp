class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0)
        return;
        if(m==0){
            nums1=nums2;
            return;
        }
        
        int i=m-1;
        int k=nums1.size()-1;
        int j=n-1;
        while(i>=0&&j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k--]=nums1[i--];
            }
            else if(nums1[i]<=nums2[j]){
                nums1[k--]=nums2[j--];
            }
        }
        while(j>=0){
            nums1[j]=nums2[j];
            j--;
        }
        
    }
};