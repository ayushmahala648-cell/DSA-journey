class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int n = s.size();
        vector <int> freq(26,0);

        for(auto val : s){
            freq[val - 'a'] ++;
        }

        for(auto val : t){
            freq[val - 'a'] --;
        }

        for(auto val : freq){
            if(val !=0) return false;
        }
        return true;
    }
};