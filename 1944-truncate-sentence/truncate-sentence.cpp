class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int n = s.size();

        int count = 0;

        for(int i=0;i<n;i++){
            if(s[i]==' '){
                count++;
                if(count==k){
                    return ans;
                }
                else{
                    ans=ans+s[i];
                }
            }
            else{
                ans=ans+s[i];
            }
        }
        return ans;
    }
};