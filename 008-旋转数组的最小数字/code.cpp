class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(!rotateArray.size()){
            return 0;
        }
        return minNumberInRotateArray(rotateArray, 0, rotateArray.size());
    }
    int minNumberInRotateArray(vector<int> rotateArray, int start, int end) {
        if(start >= end){
            return 0;
        }
        if(start + 1 == end){
            return rotateArray[start];
        }
        if(rotateArray[start] < rotateArray[end - 1]){
            return rotateArray[start];
        }else{
            int mid = (start + end)/2;
            return min(minNumberInRotateArray(rotateArray, start, mid),
                      minNumberInRotateArray(rotateArray, mid, end));
        }
    }
};