class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r = *max_element(piles.begin(),piles.end());
        int l=1;
        int res=r;

        while (l<r){
            int m =l+(r-l)/2;
            long long test=0;
            for (int i =0;i<piles.size();i++){
                test=test+((piles[i]-1)/m)+1;
            }
            if (test<=h){
                r=m;
            }
            else if (test>h){
                l=m+1;
            } 
        }
        return r;
    }
};
