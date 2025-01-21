class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int maxOP = 0;
        for(int i=0;i<n;i++){
            maxOP = (nums[n-2]-1) * (nums[n-1]-1);
        }
        return maxOP;
    }
};