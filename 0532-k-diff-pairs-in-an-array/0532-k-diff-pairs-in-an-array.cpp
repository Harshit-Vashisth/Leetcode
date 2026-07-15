class Solution {
public:
    int find(vector<int>& nums, int t,int st){
        if(st==nums.size())
        return -1;
        int s=st+1,e=nums.size()-1,mid=s+(e-s)/2;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==t)
             return mid;
            else if(nums[mid]<t){
                s=mid+1;
            }
            else
                e=mid-1;
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
       int a;
       set<pair<int,int>> ans; 
       for(int i=0;i<nums.size();i++){
            a=find(nums,nums[i]+k,i);
           
         if(a!=-1){
            ans.insert({nums[i],nums[a]});
            cout<<"F"<<i<<a<<endl;
         }
       }
       return ans.size(); 
    }
};