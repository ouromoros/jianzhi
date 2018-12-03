class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        int ab = 0;
        for (int x : data) {
            ab ^= x;
        }
        int bit = LowestBit(ab);
        int a = 0, b = 0;
        for (int x : data) {
            if (x & bit) {
                a ^= x;
            } else {
                b ^= x;
            }
        }
        *num1 = a;
        *num2 = b;
    }
    inline int LowestBit(int a) {
        for (size_t i = 0; i < sizeof(int); i++) {
            int bit = 1 << i;
            if (a & bit) return bit;
        }
        return -1;
    }
};