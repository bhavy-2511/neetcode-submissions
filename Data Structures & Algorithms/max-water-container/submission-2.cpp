class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        int left = 0;
        int right = n - 1;
        int area = 0;
        int res = 0;
        while (left < right){
            area = min(heights[left], heights[right]) * (right - left);
            res = max(res, area);

            if (heights[left] <= heights[right]) {
                left++;
            } else {
                right--;
        }
        }
        return res;
    
    }
};
