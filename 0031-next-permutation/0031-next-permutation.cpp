class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int ind1 = -1;
        for(int i=n-1 ; i>0 ; i--){
            if(nums[i] > nums[i-1]){
                ind1 = i-1;
                break;
            }   
        }

        if(ind1 == -1){
            sort(nums.begin() , nums.end());
        }
        else{
            for(int j=n-1 ; j>ind1 ; j--){
                if(nums[j]>nums[ind1]){
                    swap(nums[ind1] , nums[j]);
                    break;
                }    
            }
            sort(nums.begin()+ind1+1 , nums.end());
        }
        
        

        
    }
};