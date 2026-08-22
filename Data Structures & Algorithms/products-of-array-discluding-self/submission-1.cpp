class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product= 1;
        int count=0;
    for(int i=0;i<nums.size();i++){
        if (nums[i]!=0){
        product=product*nums[i];
        }
        else{
            count++;
        }
    }
    vector<int>res(nums.size());
    for(int i=0;i<nums.size();i++){
        if(count==1){
        if (nums[i]==0){
        res[i]= product;
        }
        }
        else if(count==0) {
            res[i]=product/nums[i];
        }
        else{
            res[i]=0;
        }
    }
    return res;

    }
};
