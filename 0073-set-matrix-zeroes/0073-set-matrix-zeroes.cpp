class Solution {
public:
   
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<pair<int,int>> arr;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                   arr.push_back({i,j});
                }
            }
        }
        for(auto [i,j]:arr){
            for(int r=0;r<n;r++)
                matrix[r][j]=0;
            
            for(int c=0;c<m;c++)
                matrix[i][c]=0;
        }
    }
};