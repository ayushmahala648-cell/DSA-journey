class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> st;
        int n = nums.size();
        
        for(int i=0 ; i<n ; i++){
            if(st.count(target-nums[i])){
                return {st[target-nums[i]] , i};
            }
            st[nums[i]] = i;
        }
        return {};
    }
};