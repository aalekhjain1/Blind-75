class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>list1;
        for ( auto it : nums) list1[it]++;
        int i = 0;
        int maxl = 0;
        while (i<nums.size()){
            int length = 0;
            int number = nums[i];
           if (list1.find(nums[i]-1)!=list1.end()){ 
            i++;
           continue;
           }
           while(list1.find(number++)!=list1.end()){
                length++;
            }
            maxl = max(maxl, length);
            i++;
        }
        return maxl;
    }
};
