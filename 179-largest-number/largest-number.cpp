class Solution {
public:
   static bool compare(int a,int b){
        string ab = to_string(a)+to_string(b);
        string ba = to_string(b)+to_string(a);
        return ab>ba;
    }
    
    string largestNumber(vector<int>& nums) {
       sort(nums.begin(), nums.end(), compare);
        
        string result;
        
        for(int i=0;i<nums.size();i++){
            result = result+to_string(nums[i]);   
        }
        
        if (result[0] =='0'){
            return "0";
            
        }
        return result;
        
    }
    
};