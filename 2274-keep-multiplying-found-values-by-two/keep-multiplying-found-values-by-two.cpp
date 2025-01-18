class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int result = original;
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==original){
                nums[i] = nums[i]*2;
                original = nums[i];
                result = max(result,nums[i]);
            }
        }
        return result;

    }
};