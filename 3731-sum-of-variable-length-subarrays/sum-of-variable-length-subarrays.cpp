class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            for(int j = max(0, i - nums[j]);j<=i;j++ ){
                sum = sum + nums[j];
            }
        }
        return sum;
    }
};