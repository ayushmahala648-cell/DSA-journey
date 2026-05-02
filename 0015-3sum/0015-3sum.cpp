class Solution {
    struct Freq {
        uint64_t data[(100'001 + 15) / 16] = {};

        inline uint64_t get(uint x, uint sign) const {
            uint shift = ((x & 15) << 2) | (sign << 1);
            return (data[x >> 4] >> shift) & 3;
        }

        inline void add(uint x, uint sign) {
            uint i = x >> 4;
            uint shift = ((x & 15) << 2) | (sign << 1);
            auto v = 3 & ~(data[i] >> shift);
            data[i] += (uint64_t)(!!v) << shift;
        }
    };
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> final;
        sort(nums.begin() , nums.end());
        for(int i=0 ; i<n ; i++){
            int j=i+1;
            int k=n-1;
            if(i!=0 && nums[i] == nums[i-1]){
                continue;
            }

            while(j<k){
                int val = nums[i] + nums[j] + nums[k];
                if(val == 0){
                    vector<int> temp = {nums[i] , nums[j] , nums[k]};
                    final.emplace_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1])j++;
                    while(j<k && nums[k] == nums[k+1])k--; 
                    
                }
                else if(val>0){
                    k--;
                }
                else if(val<0){
                    j++;
                }
            }
        }
        
        return final;
    }
};
