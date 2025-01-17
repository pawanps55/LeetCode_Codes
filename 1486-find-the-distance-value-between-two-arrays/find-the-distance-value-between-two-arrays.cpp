class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int count = 0;
       for(int i=0;i<n;i++){
        for(int j=0;j<arr2.size();j++){
            if(abs(arr1[i]-arr2[j]) <= d){
               // return abs(arr1[i]-arr2[j]);
               count++;
               break;
            }
        }
       }
       return n-count;
    }
};