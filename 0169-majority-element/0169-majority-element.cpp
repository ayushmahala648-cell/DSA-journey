class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majourity_ele = nums[0];
        int cnt=0;
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            if(nums[i] == majourity_ele) cnt++;
            else cnt--;

            if(cnt==0){
                majourity_ele = nums[i];
                cnt++;
            }
        }

        return majourity_ele;
    }
};