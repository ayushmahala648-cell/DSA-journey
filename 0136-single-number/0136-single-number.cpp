class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int imposter=0;

        for(auto x : nums){
            imposter ^=x;
        }
        return imposter;
    }
};