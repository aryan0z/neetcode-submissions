class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i]))
                t += tolower(s[i]);  // push_back also works
        }
        string p = t;
        reverse(t.begin(), t.end());
        return t == p;
    }
};
