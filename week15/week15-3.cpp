// week15-3.cpp
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s;
        string s3 = s2.substr(1,s2.length()-2);
        return s3.find(s) != string::npos;
    }
};
