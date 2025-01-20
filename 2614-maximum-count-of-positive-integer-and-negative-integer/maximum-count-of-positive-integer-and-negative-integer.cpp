class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int negCount = 0;
        int posCount = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                negCount++;
            } else if (nums[i] > 0) {
                posCount++;
            }
        }
        return max(negCount, posCount);
    }
};