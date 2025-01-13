class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int>temp;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int n = nums.size();
        int count = 1;
        int ans = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
               // temp.push_back(nums[i]);
                count++;
                ans = nums[i];
            }
             if(count==3){
                 return ans ;
            }
           
        }
        return nums[0];
        
    }
};