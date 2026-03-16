class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,freq=0;
        for(auto val : nums){
            if (val == 1){
                cnt++;
                freq = max(cnt,freq);
            }
            else{
                cnt=0;
            }
        }
        return freq;
    }
};