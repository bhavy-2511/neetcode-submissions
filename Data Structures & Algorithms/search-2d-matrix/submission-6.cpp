class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int colm=matrix[0].size();

        int l = 0;
        int r = (rows*colm)-1;
        while(l<=r){
            int m=(l+r)/2;
            int row = m/colm;
            int col =m%colm;
            if (target > matrix[row][col]){
                l=m+1;
            }
            else if (target < matrix[row][col]){
                r=m-1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};
