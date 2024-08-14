class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int r = n;
        string ans = "";
        
        for(int i=n-1;i>=0;i--){
            int a = num[i];
            if(a%2==0){
                r--;
            }
            else{
                break;
            }
        }
        
        for(int i=0;i<r;i++){
            ans +=num[i];
        }
        return ans;
    }
};