class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if(!array.size()){
            return false;
        }
        if(!array[0].size()){
            return false;
        }
        return Find(target, array, 0, array.size(), 0, array[0].size());
    }
    bool Find(int target, const vector<vector<int> > &array, int row_start, int row_end, int col_start, int col_end) {
        if(row_start >= row_end || col_start >= col_end){
            return false;
        }
        int row_mid = (row_start + row_end) / 2;
        int col_mid = (col_start + col_end) / 2;
        int m = array[row_mid][col_mid];
        if (m == target) {
            return true;
        }else if(m < target){
            return Find(target, array, row_start, row_mid + 1, col_mid + 1, col_end)
                || Find(target, array, row_mid + 1, row_end, col_start, col_mid + 1)
                || Find(target, array, row_mid + 1, row_end, col_mid + 1, col_end);
        }else{
            return Find(target, array, row_start, row_mid, col_start, col_mid)
                || Find(target, array, row_mid, row_mid + 1, col_start, col_mid)
                || Find(target, array, row_start, row_mid, col_mid, col_mid + 1);
        }
    }
};