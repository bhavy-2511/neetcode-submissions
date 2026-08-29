class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int colm=matrix[0].size();

        int left =0;
        int right = rows-1;
        while(left<right){
            int mid=(left+right)/2;
            if (target < matrix[mid][colm-1]){
                right = mid;
            }
            else if (target > matrix[mid][colm-1]){
                left = mid+1;
            }
            else{
                return true;
            }
        }
        if (!(left<=right)){
            return false;
        }
        

        int mid=(left+right)/2;
        int l=0;
        int r=colm-1;

        while(l<=r){
            int m = (r+l)/2;
            if (target < matrix[mid][m]){
                r=((r+l)/2)-1;
            }
            else if (target > matrix[mid][m]){
                l=((r+l)/2)+1;
            }
            else{
                return true;
            }
        }
         if (!(l<=r)){
            return false;
        }
        return false;
    }
};
