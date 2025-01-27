class Solution {
public:
    string finalString(string s) {
        int n = s.size();
        string p ="";

        for(int i=0;i<n;++i){
            if(s[i] != 'i'){
                p.push_back(s[i]);
            }
            else if (s[i] == 'i'){ 
                reverse(p.begin(),p.end());
            }
        }
        return p;
    }
};