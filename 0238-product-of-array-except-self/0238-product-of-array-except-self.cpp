class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int total=1;
        int zero=0;
        for(int i=0 ; i<n ; i++){
            if(nums[i] !=0){
                
                total *=nums[i];
            }
            else{
                zero++;

            }
        }

        if(!zero){
            for(int i=0 ; i<n ; i++){
                nums[i] = total/nums[i];
            }
        }
        else if(zero == n){
            nums.assign(n,0);
            return nums;
        }
        else{
            for(int i=0 ; i<n ; i++){
                if(nums[i] ==0 && zero ==1){
                    nums[i] = total;
                }
                else{
                    nums[i]=0;
                }
            }
            
        }
        return nums;
    }
};