class Solution {
private:
    int binarySearch(vector<int>& nums,int s,int e, int target){
          
        if(s>e){
            return -1;
        }
        
        int mid = s+(e-s)/2;
        
        if(nums[mid]==target){
            return mid;
        }
        
        // if right half is sorted
        if(nums[s]<=nums[mid]){
            if(target>=nums[s] && target<nums[mid]){
            
            return binarySearch(nums,s,mid-1,target);
            }
        
        else{
            return binarySearch(nums,mid+1,e,target);
        }
        }
        else{
            
            if(target>nums[mid] && target<=nums[e]){
                return binarySearch(nums,mid+1,e,target);
            }
            else{
                return binarySearch(nums,s,mid-1,target);
            }
            
            
        }
        
    };
    
    public:
    int search(vector<int>& nums, int target) {
     
      return  binarySearch(nums, 0, nums.size() - 1, target);
      
 
    }
};