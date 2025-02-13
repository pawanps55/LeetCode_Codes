class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>s;
        for(int i=0;i<nums.size();i++){
            s.push_back(nums[i]);
        }

        for(int j=0;j<s.size();j++){
            nums.push_back(s[j]);
        }
        return nums;
    }
};