class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int>prod(n);
    vector<int>revprod(n);
    int product = 1;
    int revproduct = 1;
    prod[0]=1;

    for (int i = 1; i<n; i++){
        product= product*nums[i-1];
        prod[i]=product;
    }
    revprod[n-1]=1;
    for (int j = n-2; j>=0; j--){
        revproduct= revproduct*nums[j+1];
        revprod[j]=revproduct;
    }
    vector<int>res(n);
    for (int k=0;k<n;k++){
        res[k]=prod[k]*revprod[k];
    }
    return res;
    }
};
