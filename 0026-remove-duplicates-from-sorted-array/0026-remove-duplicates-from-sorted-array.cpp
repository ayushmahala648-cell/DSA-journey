class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0 ,j=0, n = nums.size();
        int k=1;
        while(j<n-1 && i<n-1){
            if(nums[j] != nums[j+1]){
                i++;
                nums[i] = nums[j+1];
                k++;
            }
            j++;
        }
        return k;
    }
};