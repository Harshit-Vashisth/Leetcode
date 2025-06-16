class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //using unordered set
        int left=0;
        int maxlen=0;
        unordered_set<char> ch;//to check the unique ele in the set 
        
        for(int r=0;r<s.length();r++){
            while(ch.find(s[r])!=ch.end()){
                ch.erase(s[left]);
                left++;
            }
            ch.insert(s[r]);
            maxlen=max(maxlen, r-left+1);
        }
        return maxlen;
    }
};