class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0 , j=0 , n = nums.size();
        int k=0;
        while(j<n){
            if(nums[j] != val){
                swap(nums[i] , nums[j]);
                i++;
                k++;
            }
            j++;
        }
        
        return k;
    }
};