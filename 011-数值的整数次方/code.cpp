class Solution {
public:
    double Power(double base, int exponent) {
        double result = 1;
        bool negative = false;
        if(exponent < 0){
            exponent = -exponent;
            negative = true;
        }
        for(int i = 0; exponent >> i; i++){
            if(exponent & (1 << i)){
                result *= base;
            }
            base *= base;
        }
        if(negative){
            return 1 / result;
        }else{
            return result;
        }
    }
};