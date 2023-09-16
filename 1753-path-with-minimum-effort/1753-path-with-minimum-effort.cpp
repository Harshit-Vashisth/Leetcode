class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
         priority_queue< pair<int,pair<int,int> >, vector<pair<int,pair<int,int> > >, greater<pair<int,pair<int,int> > > > pq;
        vector<vector<int>> dis(heights.size(),vector<int>(heights[0].size(),INT_MAX));
        pq.push({0,{0,0}});
        dis[0][0]=0;
        while(!pq.empty()){
            auto fNode=pq.top();
            pq.pop();
            int fNodediff=fNode.first;
            int x=fNode.second.first;
            int y=fNode.second.second;
            if(x==heights.size()-1&&y==heights[0].size()-1)
                return dis[x][y];
            
            int dx[]={-1,0,1,0};
            int dy[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                int newX=x+dx[i];
                int newY=y+dy[i];

                if(newX>=0 && newY>=0  && newX<heights.size() &&newY<heights[0].size())
                {
                    int currDiff=abs(heights[x][y]-heights[newX][newY]);
                    int newMax=max(currDiff,fNodediff);
                    if(newMax<dis[newX][newY]){
                        dis[newX][newY]=newMax;
                        pq.push({newMax,{newX,newY}});
                    }
                }
            }
        }
        return 0;
    }
};