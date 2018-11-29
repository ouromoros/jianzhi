class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int> a;
        for(int i = 0; i<array.size(); i++) {
            if(isOdd(array[i])) a.push_back(array[i]);
        }
        for(int i = 0; i<array.size(); i++) {
            if(!isOdd(array[i])) a.push_back(array[i]);
        }
        array = a;
    }
    inline bool isOdd(int n) {
        return n % 2;
    }
};