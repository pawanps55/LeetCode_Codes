class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int ans = nums[0]+nums[1];

        for(int i=0; i<n && nums[i]+nums[i+1]==ans;i=i+2){
            count++;
        }
        return count;
    }
};