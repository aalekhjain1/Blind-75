class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int >list1;
        for (int i = 0; i < nums.size();i++) {
           if (list1.find(nums[i])!= list1.end()) {
                int x = min(i , list1[nums[i]]);
                list1[nums[i]]=x;
           }
           else list1[nums[i]]=i;
            }

        for (int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            if (list1.find(difference)!= list1.end() && list1[difference] != i){ 
                int x = list1[difference];
                return {min(x , i), max(x, i)};

            }
                
                
        }
        return {};
    }
};
