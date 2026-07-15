class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int s=0,e=arr.size(),mid=0;
        int a=0,b=0;
        vector<int> ans;
        while(s<e){
            mid=s+(e-s)/2;
            if(arr[mid]==x){
                s=mid;
            break;}
            else if(arr[mid]<x)
            s=mid+1;
            else
            e=mid;
        }
        if(s==0)
            return vector<int>(arr.begin(), arr.begin() + k);
        a=s-1;
        b=s;
        while(a>=0&&b<arr.size()&&k--){
            if((abs(arr[a]-x)<=abs(arr[b]-x))&&a<b)
            ans.push_back(arr[a--]);
            else 
            ans.push_back(arr[b++]);
        }
        while(a>=0&&k>0){
            ans.push_back(arr[a--]);
            k--;
        }
        while(b<arr.size()&&k>0){
            ans.push_back(arr[b++]);
            k--;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};