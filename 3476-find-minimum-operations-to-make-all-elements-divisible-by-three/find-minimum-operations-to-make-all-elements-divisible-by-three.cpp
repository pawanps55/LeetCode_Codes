class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i=0;i<n;i++){
            int quo = nums[i]%3;
            if(quo!=0){
                count++;
            }
        }
        return count;
    }
};