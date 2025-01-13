class Solution {
public:
    int elementSum(vector<int>& nums){
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
        }
        return sum;
    }
    int digitSum(vector<int>& nums){

            int digitSum=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>9){
                    while(nums[i] != 0){
                        int rem=nums[i]%10;
                        digitSum= digitSum+rem;
                        nums[i] = nums[i]/10;
                    }
                }
                else{
                    digitSum = digitSum+nums[i];
                }
                
            }return digitSum;

    }
    int differenceOfSum(vector<int>& nums) {
        
        int x = elementSum(nums);
        int y = digitSum(nums);
        return x-y;
    }
};