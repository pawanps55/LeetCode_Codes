class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
    
        for(int i=left;i<=right;i++){
            int s = words[i].size();
            if(words[i][0]=='a'||words[i][0]=='e'||words[i][0]=='i'||words[i][0]=='o'||words[i][0]=='u'){
                if(words[i][s-1]=='a'||words[i][s-1]=='e'||words[i][s-1]=='i'||words[i][s-1]=='o'||words[i][s-1]=='u'){
                    count++;
                }
            }
        }
        return count;
    }
};