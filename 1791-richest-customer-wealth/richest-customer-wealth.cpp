class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int n = accounts.size();
        vector<int>s;
        int ans = INT_MIN;
       for(int i=0;i<accounts.size();i++){
        int sum = 0;
        for(int j=0;j<accounts[0].size();j++){
        sum = sum+accounts[i][j];
        }
            ans = max(ans,sum);
        }
       return ans;
    }
};