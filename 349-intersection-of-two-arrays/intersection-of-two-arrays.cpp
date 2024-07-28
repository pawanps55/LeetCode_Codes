class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

         
        
       /*  for(int i=0;i<nums1.size();i++){
            int element = nums1[i];
            for(int j=0;j<nums2.size();j++){
                if(element==nums2[j])
                {
                    ans.push_back(element);
                    nums2[j]=-2;
                    break;
                }

            }
        } return ans; 
        
 */
 

    std::vector<int> ans;
    std::unordered_map<int, int> freq;
    int n = nums1.size();
    for (int i = 0; i < n; i++) {
        int num = nums1[i];
        freq[num]++;
    }

    n = nums2.size();
    for (int i = 0; i < n; i++) {
        int num = nums2[i];
        if (freq[num] > 0) {
            ans.push_back(num);
            freq[num]=0;
        }
    }

    return ans;
}
   

};