class Solution {
public:
    void generate(string s, int n, vector<string>& ans)
    {
        if (n == 0) {
            ans.push_back(s);
            return;
        }
        generate(s + '1', n - 1, ans);
        if (s=="" || s[s.length()-1] == '1') {
            generate(s + '0', n - 1, ans);
        }
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        generate("", n, ans);
        return ans;
    }
};