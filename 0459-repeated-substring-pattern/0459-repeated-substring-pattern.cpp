class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string x = s + s;
        return x.substr(1, x.size() - 2).find(s) != string::npos;
    }
};



