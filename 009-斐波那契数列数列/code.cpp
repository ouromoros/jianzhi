class Solution {
public:
    int Fibonacci(int n) {
        int a = 0, b = 1, t;
        while(n--){
            t = a + b;
            a = b;
            b = t;
        }
        return a;
    }
};