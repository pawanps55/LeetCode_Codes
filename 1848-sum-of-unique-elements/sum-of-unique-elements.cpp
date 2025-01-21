class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
     //   int count = 0;
        int ans =0;
        for(int i=0;i<n;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]){
                   count++;
                    }
                }
            
             if(count==1){
                ans = ans+nums[i];
       }
        }
        
        return ans ;
      
    }
};