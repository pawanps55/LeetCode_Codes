class Solution {
public:
    int removeDuplicates(vector<int>& nums){  
      //  vector<int>temp;
        int j = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[j]){
                 j++;
                nums[j] = nums[i];
               
            }
            
        }
       return j+1;
    }
};