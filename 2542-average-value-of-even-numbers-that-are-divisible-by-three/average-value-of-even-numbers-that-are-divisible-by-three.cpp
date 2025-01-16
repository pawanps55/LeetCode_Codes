class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int sol =0;
        int count = 0;
        vector<int>temp;
        for(int i=0;i<n;i++){
            if(nums[i]%6==0){
           ans = ans+nums[i];
           count++;
           }
        }

        if(count==0)
       return 0;


       return ans/count;
    }
};