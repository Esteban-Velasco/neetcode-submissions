#include <unordered_map>

using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> nums_hash;
        for (const auto &num : nums) {
            if (nums_hash.find(num) != nums_hash.end()){
                return true;
            } else {
                nums_hash[num] = 0;
            }
        }
        return false;
    }
};