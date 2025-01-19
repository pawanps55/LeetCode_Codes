class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();
        vector<int>ans;

        for(int i=0;i<n;i++){
            int num1 = nums1[i];
            bool found = false;
           int Nextgreater = -1;
            for(int j=0;j<m;j++){
                if(nums2[j]==num1){
                    found = true;
                    
                }
                if(found && nums1[i]<nums2[j]){
                    Nextgreater = nums2[j];
                    break;
                }
               
            }
            ans.push_back(Nextgreater);
        }
        return ans;


    }
};