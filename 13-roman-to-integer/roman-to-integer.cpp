class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman;
        roman.insert(make_pair('I',1));
        roman.insert(make_pair('V',5));
        roman.insert(make_pair('X',10));
        roman.insert(make_pair('L',50));
        roman.insert(make_pair('C',100));
        roman.insert(make_pair('D',500));
        roman.insert(make_pair('M',1000));
        
        int length = s.size();
        int num;
        int sum = 0;
        
        for(int i = 0;i<length; ){
            if(i == (length - 1) || (roman [s[i]] >= roman[s[i+1]])){
                num = roman[s[i]];
                i++;
                
            }
            else{
                num = roman[s[i+1]] - roman[s[i]];
                i = i+2;
            }
            sum = sum + num;
        }
        return sum;
    }
};