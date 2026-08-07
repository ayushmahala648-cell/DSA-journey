class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> st;
        vector<int> v;

        for(auto x : nums){
            if(!st.count(x)){
                v.emplace_back(x);
            }
            st.emplace(x);
            
        }

        nums.swap(v);


        return st.size();
    }
};