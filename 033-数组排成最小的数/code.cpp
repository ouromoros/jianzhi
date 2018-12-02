class Solution {
public:
    string PrintMinNumber(vector<int> numbers) {
        vector<string> vn;
        for (int n : numbers) {
            vn.push_back(to_string(n));
        }
        sort(vn.begin(), vn.end(), cmp);
        string r;
        for (string &v : vn) {
            r += v;
        }
        return r;
    }
    static bool cmp(const string &ra, const string &rb) {
        string s1 = ra + rb, s2 = rb + ra;
        return s1 < s2;
    }
};