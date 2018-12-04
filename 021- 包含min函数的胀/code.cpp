#include <limits.h>
class Solution {
private:
    stack<int> s_;
    stack<int> ms_;
    int min_ = INT_MAX;
public:
    void push(int value) {
        if (value < min_) {
            min_ = value;
        }
        s_.push(value);
        ms_.push(min_);
    }
    void pop() {
        s_.pop();
        ms_.pop();
    }
    int top() {
        return s_.top();
    }
    int min() {
        return ms_.top();
    }
};