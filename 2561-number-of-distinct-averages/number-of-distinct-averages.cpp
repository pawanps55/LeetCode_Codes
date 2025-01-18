class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double> s;

        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            double avg = (nums[left] + nums[right]) / 2.0;

            s.insert(avg);
            left++;
            right--;
        }
        return s.size();
    }
};