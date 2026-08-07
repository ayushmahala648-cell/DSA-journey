class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0 , j=1 , k=1;
        int n = nums.size();

        while(i<n && j<n){
            if(nums[j] != nums[j-1]){
                i++;
                nums[i] = nums[j];
                k++;
            }
            j++;
        }
        return k;
    }
};