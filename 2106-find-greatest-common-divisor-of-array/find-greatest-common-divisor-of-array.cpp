class Solution {
public:
    int findGCD(vector<int>& nums) {
     /*   int n = nums.size()-1;
        vector<int>s;
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            if(nums[0]%nums[n-1]==0  || nums[n-1]%nums[i]==0){
                s.push_back(nums[0]);
                s.push_back(nums[n-1]);
            }
                s.push_back(1);
            }
        }
        sort(s.begin(),s.end());
        return s[0];*/
          sort(nums.begin(),nums.end());
          int n = nums.size()-1;
    int ggcd = gcd(nums[0],nums[n]);
    return ggcd;

    }
};