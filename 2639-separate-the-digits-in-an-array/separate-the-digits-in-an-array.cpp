class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size()-1;

        for(int i=n;i>=0;i--){
            while(nums[i]>0){
                int digit=nums[i]%10;
                nums[i] = nums[i]/10;
               ans.push_back(digit);
            }
                

        
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};