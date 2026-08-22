#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        
        for (int num : nums) {
            // If num is already in seen, we found a duplicate!
            if (seen.count(num)) {
                return true;
            }
            // Add current number to set
            seen.insert(num);
        }
        return false;
    }
};
