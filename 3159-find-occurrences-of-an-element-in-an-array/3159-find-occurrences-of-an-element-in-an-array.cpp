class Solution {
public:
    void position(vector<int>& nums, int x,vector<int>& pos, int &count){
        if(nums.size()==0)
        return ;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x)
            {
                pos[count]=i;
                count++;
            }
        }
    }
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> pos(nums.size());
        vector<int> ans(queries.size(),-1);
        int count=0;
        position(nums,x,pos,count);
        for(auto x: pos)
        cout<<x;
        for(int i =0;i<queries.size();i++){
            if(queries[i]<=count){
                ans[i]=pos[queries[i]-1];
            }
        }
        return ans;
    }
};