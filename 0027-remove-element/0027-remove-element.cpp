class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0 , j=0 , n = nums.size();

        while(j<n && i<n){
            if(nums[i] != val){
                i++;
            }
            else if(nums[j] == val || i>j){
                j++;
            }
            else{
                swap(nums[i] , nums[j]);
            }
        }
        int k=0;
        for(int i=n-1 ; i>=0 ; i--){
            if(nums[i] == val){
                nums.pop_back();
            }
            else{
                k++;
            }
        }
        return k;
    }
};