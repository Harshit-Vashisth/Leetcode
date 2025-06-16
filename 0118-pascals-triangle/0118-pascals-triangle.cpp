class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==0)
            return {};
        if(numRows==1)
        return {{1}};

        vector<vector<int>> prev=generate(numRows-1);
        vector<int> newr(numRows,1);
        for(int i=1;i<numRows-1;i++){
            newr[i]=prev.back()[i-1]+prev.back()[i];
        }
        prev.push_back(newr);
        return prev;
    }
};