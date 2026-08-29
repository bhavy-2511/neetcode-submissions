class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r = *max_element(piles.begin(),piles.end());
        int l=1;
        int res=r;

        while (l<r){
            int m =(l+r)/2;
            int test=0;
            int hi=0;
            for (int i =0;i<piles.size();i++){
                hi=((piles[i]-1)/m)+1;
                test=test+hi;
            }
            if (test<=h){
                r=m;
            }
            else if (test>h){
                l=m+1;
            } 
        }
        return (l+r)/2;
    }
};
