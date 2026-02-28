class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0 , j=0 , n=nums.size();

        while(i<n && j<n && n!=1){
            if(nums[i] != 0){
                i++;
            }

            if(nums[j] !=0  && i<j){
                swap(nums[i] , nums[j]);
                i++;
            }
            j++;
        }
    }
};