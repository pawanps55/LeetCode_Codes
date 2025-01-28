class Solution {
public:
    bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int countVowelSubstrings(string word) {
        
        int i=0;
        int count=0;

        for(int i=0;i<word.size();i++){
            set<char>vowels;

            for(int j=i;j<word.size();j++){
                if(isvowel(word[j])){
                    vowels.insert(word[j]);

                    if(vowels.size()==5){
                        count++;
                    }
                }
                else{
                    break;
                }
            }
        }
        return count;
    }
};