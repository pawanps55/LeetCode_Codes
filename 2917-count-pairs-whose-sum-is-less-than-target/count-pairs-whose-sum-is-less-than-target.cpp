class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            int ans = nums[i]+nums[j];
            if(ans<target){
                count++;
            }
            }
        }
        return count;
    }
};