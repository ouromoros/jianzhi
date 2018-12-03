class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if (!index) return 0;
        set<long> s;
        s.insert(1);
        for(int i = 0; i < index - 1; i++) {
            int a = *s.begin();
            s.erase(s.begin());
            s.insert(a * 2L);
            s.insert(a * 3L);
            s.insert(a * 5L);
        }
        return *s.begin();
    }
};