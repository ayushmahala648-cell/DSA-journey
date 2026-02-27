
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> st;

        for(auto val : nums){
            st.insert(val);
        }

        if(st.size() != nums.size()){
            return true;
        }
        return false;
    }
};