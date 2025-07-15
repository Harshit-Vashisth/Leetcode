class Solution {
public:
    bool isValid(string word) {
        bool vol=false;
        bool cons=false;
        int c=0;
        for(int i=0;i<word.length();i++){
            if((word[i]>='a'&&word[i]<='z')||(word[i]>='A'&&word[i]<='Z')||(word[i]>='0'&&word[i]<='9')){
                if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
                    vol=true;
                else if(!(word[i]>='0'&&word[i]<='9'))
                cons=true;
                c++;
            }
            else return false;
        }
        return vol&&cons&&(c>=3);
    }
};