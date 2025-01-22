class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length()-1;
        int score = 0;
        
        for(int i = 0;i<n;i++){
            int asciValue = s[i];
                score = score + abs(s[i]-s[i+1]);
        }
        return score;
    }
};