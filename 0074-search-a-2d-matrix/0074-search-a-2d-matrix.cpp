class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0,e=matrix[0].size()*matrix.size()-1,mid=s+(e-s)/2;
        int m=matrix[0].size();
        int row,col;
        while(s<=e){
            mid=s+(e-s)/2;
            row=mid/m;
            col=mid%m;
            cout<<row<<col<<matrix[row][col]<<endl;
            if(matrix[row][col]<target)
            s=mid+1;
            else if(matrix[row][col]>target)
            e=mid-1;
            else 
            return true;
        }
        return false;
    }
};