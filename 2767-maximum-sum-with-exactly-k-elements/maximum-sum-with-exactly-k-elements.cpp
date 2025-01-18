#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;

        sort(nums.begin(),nums.end());
        int e = nums[n-1];
        for(int i=0;i<k;i++)
        {
            sum = sum + (e+i);
        }

        return sum;





      /*  for (int i = 0; i < k; i++) {
            int maxVal = *max_element(nums.begin(),nums.end());
            nums.push_back(maxVal+1);
        }
        for(int i=0;i<n;i++){
            sum = sum+nums[i];
        }
        return sum;*/
    }
};