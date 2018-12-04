class Solution {
public:
    string LeftRotateString(string str, int n) {
        reverse(str.begin(), str.end());
        auto mid = str.end() - n;
        reverse(str.begin(), mid);
        reverse(mid, str.end());
        return str;
    }
};