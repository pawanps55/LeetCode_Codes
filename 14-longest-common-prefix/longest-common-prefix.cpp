class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          sort(strs.begin(), strs.end());
        if (strs[0].empty())
            return "";
        string ans = "";
        int n = strs.size();
        int i = 0;
        while (i < strs[0].length() && strs[0][i] == strs[n - 1][i]) {
            ans += strs[0][i];
            i++;
        }
        return ans;
    }
};