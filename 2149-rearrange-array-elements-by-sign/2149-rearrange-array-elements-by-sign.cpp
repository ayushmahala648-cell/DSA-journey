class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector <int> even;
        vector <int> odd;
        vector <int> result;
        for(int i=0 ; i<n ; i++){
            if(nums[i] >=0){
                even.emplace_back(nums[i]);
            }else{
                odd.emplace_back(nums[i]);
            }
        }

        int i=0,j=0; // ifor even j for odd
        while(i<n/2 || j<n/2){
            result.emplace_back(even[i]);
            result.emplace_back(odd[j]);
            i++;
            j++;
        }

        return result;
    }
};