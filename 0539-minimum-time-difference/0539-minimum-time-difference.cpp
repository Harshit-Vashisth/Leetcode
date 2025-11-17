class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        int mini=INT_MAX;
        for(int i=0;i<timePoints.size();i++){
            string s=timePoints[i];
            int hr=stoi(s.substr(0,2));
            int min=stoi(s.substr(3,2));
            int totalmin=hr*60+min;
            minutes.push_back(totalmin);
        }
        sort(minutes.begin(),minutes.end());
        for(int i=0;i<minutes.size()-1;i++){
            int d=minutes[i+1]-minutes[i];
                mini=min(d,mini);
        }
        int last=(minutes[0]+1440)-minutes[minutes.size()-1];
        mini=min(last,mini);
        return mini;
    }
};