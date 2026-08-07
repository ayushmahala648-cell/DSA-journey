class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> st;
        for(auto x : nums){
            st.emplace(x);
        }
        nums.clear();
        nums.assign(st.begin() , st.end());
        return st.size();
    }
};