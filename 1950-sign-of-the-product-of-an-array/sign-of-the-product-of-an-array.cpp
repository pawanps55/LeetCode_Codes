class Solution{
public:
    int arraySign(vector<int>& nums) {
        
        int n= nums.size();
        int prod = 1;

        for(int i=0;i<n;i++){
           if(nums[i]<0){
            nums[i]=-1;
           }
           if(nums[i]>0){
            nums[i]=1;
           }
           prod = prod*nums[i];
        }

        if(prod>0){
            return 1;
        }
        if(prod<0){
            return -1;
        }
        return 0;

    }
  
 
};