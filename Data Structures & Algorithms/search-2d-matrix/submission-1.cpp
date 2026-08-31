class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int l = 0, r = matrix.size() - 1, mid;
        
        // 1. Find the correct row
        while (l <= r) {
            mid = (l + r) / 2;
            if (matrix[mid][0] == target) {
                return true;
            } else if (matrix[mid][0] < target) {
                l = mid + 1; 
            } else {
                r = mid - 1; // correctly steps backwards
            }
        }
        
        
        int row = r;
        
        
        if (row < 0) return false;
        
        
        l = 0;
        r = matrix[row].size() - 1;
        
        while (l <= r) {
            int m = (l + r) / 2;
            if (matrix[row][m] == target) {
                return true;
            } else if (matrix[row][m] < target) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        
        return false;
    }
};