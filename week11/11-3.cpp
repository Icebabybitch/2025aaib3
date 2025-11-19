// week11-3.cpp
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1, j = b.length()-1;
        vector<int> ans;
        int carry = 0;
        while (i>=0 || j>=0){
            int now = carry;
            if (i>=0){
                now += a[i]-'0';
                i--;
            }
            if (j>=0){
                now += b[j]-'0';
                j--;
            }
            ans.push_back(now%2);
            carry = now / 2;
        }
        if (carry>0) ans.push_back(carry);
        string strAns = "";
        for (int i=ans.size()-1; i>=0; i--){
            strAns = strAns + (char)(ans[i]+'0');
        }
        return strAns;
    }
};
