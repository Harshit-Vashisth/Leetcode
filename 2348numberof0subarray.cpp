#include<bits/stdc++.h>
using namespace std;

long long zero(vector<int>& nums){
    int count=0;
    for(int i=0;i<nums.size();i++){
        int j=i;
        while(j<nums.size()&&nums[j]==0){
            count++;
            j++;
        }
    }
    return count;
}
int main()
{
    vector<int> arr={1,0,0,0,0};
    cout<<zero(arr);
}