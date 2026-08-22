#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> summap;
        for (int i=0 ; i<nums.size(); i++){
            int comp = target - nums[i];
            if(summap.count(comp)){
                return{summap[comp],i};
            }
            summap[nums[i]]=i;
        }
        return{};
    }
};
