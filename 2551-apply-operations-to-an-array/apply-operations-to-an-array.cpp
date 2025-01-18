class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    nums[i]=nums[i]*2;
                    nums[j]=nums[j]*0;
                }
                i++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[count]=nums[i];
                count++;
            }
        }
        for(int i=count;i<n;i++){
            nums[i]=0;
        }
        return nums;
    }
};