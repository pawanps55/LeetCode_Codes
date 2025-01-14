class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int singlesum = 0;
        int doublesum = 0;
        for(int i=0;i<n;i++){
            if(nums[i]<=9){
                singlesum = singlesum+nums[i];
            }
            if(nums[i]>9){
                doublesum = doublesum+nums[i];
            }

        }
        if(singlesum > doublesum || singlesum < doublesum){
        return true;
        }
        return false;
    }
};