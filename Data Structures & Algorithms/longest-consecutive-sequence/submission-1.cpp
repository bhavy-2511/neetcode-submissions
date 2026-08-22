class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         if (nums.size()==0){
            return 0;
         }
         if (nums.size()==1){
            return 1;
         }
         int count=0;
         int max=0;
         for (int i=0; i<nums.size()-1; i++){
           if( nums[i]==nums[i+1]-1){
            count=count+1;
           }
           else if (nums[i]==nums[i+1]){
            count=count;
           }
           else{
            count=0;
           }
           if(count>max){
            max=count;
           }
         }
        max=max+1;
        return max;
    }
};
