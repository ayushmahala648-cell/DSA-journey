class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int number=0 , max_number = 0;

        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] == 1){
                number++;
                max_number = max(number , max_number);
            }else{
                number=0;
            }
        }
        return max_number;

    }
};