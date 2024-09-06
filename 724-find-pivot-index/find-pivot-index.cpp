class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0;
        int front_sum = 0;
        
        for(int i=0;i<n;i++){
            sum =sum + nums[i];
        }
        
        for(int i = 0;i<n;i++){
            sum = sum - nums[i];
            if(front_sum == sum){
                return i;
                
            }
            else{
                front_sum = front_sum + nums[i];
            }
            
        }
        return -1;
        
    }
};