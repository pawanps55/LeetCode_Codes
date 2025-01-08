class Solution {
public:
int maximumDifference(vector<int>& nums) {
    int minValue = nums[0];
    int maxDifference = -1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > minValue) {
            maxDifference = max(maxDifference, nums[i] - minValue);
        } else {
            minValue = nums[i];
        }
    }

    return maxDifference;
}
};