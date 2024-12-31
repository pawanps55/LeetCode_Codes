class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k = 0;
        int n = nums.size();
         unordered_map<int, int> count;

        for(int i=0;i<n;i++){
            if(count.find(nums[i])==count.end()){
                count[nums[i]]=1;
            }
            else{
                count[nums[i]] = count[nums[i]]+1;

            }
        }
        for (int i = 0; i < n; i++) {
        if (count[nums[i]] > (n / 2)) {
            return nums[i]; 
        }
        
    }return 0;
    }
};