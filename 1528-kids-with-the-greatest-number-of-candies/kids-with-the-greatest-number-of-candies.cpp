class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = *max_element(candies.begin(),candies.end());
        int n = candies.size();
        vector<bool>s;
        for(int i = 0;i<n;i++){
            if(m<=candies[i]+extraCandies){
                s.push_back(true);
            }
            else{
                s.push_back(false);
            }
        
        }
        return s;
    }
};