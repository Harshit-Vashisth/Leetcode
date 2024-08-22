class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int ,int >> arr;
       for(int i=0;i<nums.size();i++){
        arr.push_back({nums[i],i});
       } 
       sort(arr.begin(),arr.end());
       int left=0;
       int right=nums.size()-1;
       while(left<=right){
        
        if(arr[left].first+arr[right].first==target)
        return {arr[left].second,arr[right].second};
        else if (arr[left].first+arr[right].first<target)
        left+=1;
        else
        right-=1;
       }
       return {};
    }
};