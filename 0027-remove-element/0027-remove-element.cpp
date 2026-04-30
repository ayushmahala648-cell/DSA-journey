class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0 , j=0 , n = nums.size();

        while(j<n){
            if(nums[j] != val){
                swap(nums[i] , nums[j]);
                i++;
            }
            j++;
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