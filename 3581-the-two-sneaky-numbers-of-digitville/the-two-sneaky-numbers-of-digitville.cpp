class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>temp;
       

        for(int i = 0 ; i<n;i++){
           for(int j = i+1;j<n;j++){
            if(nums[i]==nums[j]){
                temp.push_back(nums[i]);
            }
           }
        
        }
        return temp;
    }
};