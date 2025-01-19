class Solution {
public:
    int minElement(vector<int>& nums) {
      int sum, p;
      vector<int>ans;
        for (int i = 0; i < nums.size(); i++) {
            sum = 0;
            p = nums[i];
            while (p > 0) {
                int s = p % 10;
                sum = sum + s;
                p = p / 10;
            }
            ans.push_back(sum);
        }
        sort(ans.begin(), ans.end());
        return ans[0];
    }
};