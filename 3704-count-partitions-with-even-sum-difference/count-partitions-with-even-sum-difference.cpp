class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int evencount = 0;
        int totalsum = 0;
        for(int i=0;i<n;i++){
            totalsum= totalsum + nums[i]; 
        }

        int leftsum = 0;
        for(int j=0;j<n-1;j++){
            leftsum = leftsum + nums[j];

            int rightSum = totalsum - leftsum;
            int ans = leftsum - rightSum;
            if(ans%2==0){
                evencount++;
            }
        }
        return evencount;
          
    }
};