class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> m;
        int mini=INT_MAX;
        for(int i=0;i<timePoints.size();i++){
            int hr=stoi(timePoints[i].substr(0,2));
            
            int mi=hr*60+stoi(timePoints[i].substr(3,2));
            m.push_back(mi);
            cout<<mi<<endl;
        }
        sort(m.begin(),m.end());
        for(int i=0;i<m.size()-1;i++){
            int diff=m[i+1]-m[i];
            mini=min(mini,diff);
        }
      
        mini=min(mini,m[0]+1440-m[m.size()-1]);
        return mini;
    }
};