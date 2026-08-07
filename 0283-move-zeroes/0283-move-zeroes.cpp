class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0  , j=1;
        int n = nums.size();
        
        while(j<n){
            if(nums[i] !=0){
                i++;
                j++;

            }
            else if(nums[i] == 0){
                if(nums[j] ==0){
                    j++;
                }else{
                    swap(nums[i] , nums[j]);
                    i++;
                    j++;
                }
            }
            

        }
    }
};