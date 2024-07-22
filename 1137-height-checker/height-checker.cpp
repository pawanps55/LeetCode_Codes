class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // pehale origina hights ko ek vector me dalo 
        vector<int>expected = heights;
        
        // fir us vector ok sort karo
        sort(expected.begin(),expected.end());
        
        
        // count banao 
        int mismatch = 0;
        
        // for loop lagake heights arrya me traverse karo if ki condition lagao 
        
        for(int i = 0 ;i<heights.size();i++){
            if(heights[i] != expected[i]){
                ++mismatch;
            }
        }
        
        return mismatch;
        
        
        
    }
};