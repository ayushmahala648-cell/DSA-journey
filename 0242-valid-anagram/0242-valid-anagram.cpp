class Solution {
public:
    bool isAnagram(string s, string t) {
        map <char , int> mps;
        map <char , int> mpt;

        if(s.size() != t.size()){
            return false;
        }

        for(auto val : s){
            mps[val] ++;
        }

        for(auto val : t){
            mpt[val] ++;
        }
        
        for(auto val : s){
            if(mps[val] != mpt[val]){
                return false;
            }
        }
        return true;
    }
};