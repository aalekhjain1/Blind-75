class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>ans(nums.begin(), nums.end());
        if (ans.size()!= nums.size()) return true;
        return false;
    }
};