class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        if (!data.size()) return 0;
        return GetNumberOfK(data, k, 0, data.size() - 1);
    }
    int GetNumberOfK(vector<int> &data, int k, int start, int end) {
        if (data[start] == k && data[end] == k) {
            return end - start + 1;
        }
        if (start == end) {
            return data[start] == k;
        }
        int result = 0;
        int mid = (start + end) / 2;
        if (data[start] <= k && data[mid] >= k) {
            result += GetNumberOfK(data, k, start, mid);
        }
        if (data[mid + 1] <= k && data[end] >= k) {
            result += GetNumberOfK(data, k, mid + 1, end);
        }
        return result;
    }
    
};