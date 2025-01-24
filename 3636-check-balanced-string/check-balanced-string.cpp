class Solution {
public:
    bool isBalanced(string num) {
        int n = num.size();
        int evensum = 0,oddsum = 0;
    for(int i=0;i<n;i++){
        int digit = num[i] - '0'; // convert char to digit
            if(i%2==0){
                evensum = evensum+digit; 
            }
            else{
                oddsum = oddsum+digit;
            }
        }
        return evensum==oddsum;
    }
};