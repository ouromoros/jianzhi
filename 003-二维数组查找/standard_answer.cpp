class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if(!array.size()){
            return false;
        }
        if(!array[0].size()){
            return false;
        }
        int row = 0;
        int col = array[0].size() - 1;
        while(row < array.size() && col >= 0){
            if(array[row][col] == target){
                return true;
            }else if(array[row][col] > target){
                col--;
            }else{
                row++;
            }
        }
        return false;
    }
};