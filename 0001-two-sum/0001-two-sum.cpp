class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> st;
        int n = nums.size();
        vector<int> ans;
        for(int i=0 ; i<n ; i++){
            if(st.count(target-nums[i])){
                ans = {st[target-nums[i]] , i};
            }
            st[nums[i]] = i;
        }
        return ans;
    }
};