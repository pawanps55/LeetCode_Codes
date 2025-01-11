class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
    
       int s = 0;
       int e = candyType.size()-1;
       int c  = candyType.size()/2; 
       int count=1;
       sort(candyType.begin(),candyType.end());
        
       for(int i=0;i<e;i++){
        if(candyType[i] != candyType[i+1]){
            count++;
        }
        if(count==c)
        return c;
       } 
       return min(c,count);
    }
};