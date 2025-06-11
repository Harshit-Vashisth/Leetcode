class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int freq1[101]={0},freq2[101]={0},first=0,second=0;
        for(int i : nums1)
        freq1[i]++;
        for(int i : nums2)
        freq2[i]++;
        for(int i=1;i<=100;i++){
            if(freq1[i]&&freq2[i]){
                first+=freq1[i];
                second+=freq2[i];
            }
        }
        return {first,second};
    }
};