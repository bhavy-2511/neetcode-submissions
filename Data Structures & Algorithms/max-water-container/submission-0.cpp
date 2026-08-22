class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        int left = 0;
        int right = n - 1;
        int area = 0;
        int max = 0;
        while (left < right){
            if (heights[left] > heights[right]){
                area = heights[right]*(right-left);
                right--;
            }
            else if (heights[left] <= heights[right]){
                area = heights[left]*(right-left);
                left++;
            }
            if (area > max){
                max=area;
            }
        }
        return max;
    }
};
