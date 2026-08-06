class Solution {
public:
    bool check(vector<int>& nums) {
        int down = 0;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i] < nums[i-1]){
                down++;
                if (down >1) return false;
            }
        }
        if(nums[nums.size()-1] > nums[0] ) down ++;

        if (down ==1 || down ==0) return true;
        return false;
    }
};