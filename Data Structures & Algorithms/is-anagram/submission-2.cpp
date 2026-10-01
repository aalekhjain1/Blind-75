class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<int , int > list1;
        for (auto it : s) list1[it]++;
        for (int i = 0 ; i < t.size(); i++){
            
            if(list1.find(t[i])!=list1.end()){
                list1[t[i]]--;
            }
            else return false;
        }
        for (auto it : list1){
            if(it.second != 0) return false;
        }
        return true;

        
    }
};
