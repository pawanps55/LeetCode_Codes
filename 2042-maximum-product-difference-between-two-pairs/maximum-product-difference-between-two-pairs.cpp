class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = nums[n-1]*nums[n-2]-nums[0]*nums[1]; 
        }
        return ans;
    }
};