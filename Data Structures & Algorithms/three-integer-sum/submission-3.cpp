class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<vector<int>>res;
        for (int i=0;i<n-2;i++){
        int left=i+1;
        int right= n-1;
        while(left<right){
            if(nums[i]+nums[left]+nums[right]==0){
                res.insert({nums[i],nums[left],nums[right]});
                left++;
                right--;
            }
            else if (nums[i]+nums[left]+nums[right]>0){
                right--;
            }
            else {
                left++;
            }
        }
                }
                return(vector<vector<int>>(res.begin(),res.end()));
    }
};
