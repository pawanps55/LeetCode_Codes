class Solution {
public:
    string removeTrailingZeros(string nums) {
        int n = nums.size()-1;
        string ans = "";
        for(int i=n;i>0;i--){
            if(nums[i] != '0'){
               return nums;
            }
            else{
                nums.pop_back();
            }
        }
        return nums;
    }
};