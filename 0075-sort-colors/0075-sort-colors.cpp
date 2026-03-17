class Solution {
public:
    void sortColors(vector<int>& nums) {
        // for(int i=0 ; i<nums.size() ; i++){
        //     for(int j =i ; j>0 ; j--){
        //         if(nums[j]<nums[j-1]){
        //             swap(nums[j] , nums[j-1]);
        //         }
        //     }
        // }

        sort(nums.begin() , nums.end());
    }
};