class Solution {
public:
    bool isAnagram(string s, string t) {
         if(s.size()!= t.size()) return false;
        vector<int> finallist(26, 0);
        for (int i = 0 ; i < s.size(); i++){
        int c = s[i] - 'a';
        int d = t[i] - 'a';
        finallist[d]--;
        finallist[c]++;
        }

        for (auto it : finallist){
            if (it!=0) return false;
        }
        return true;
    }
};
