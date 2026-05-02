class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector <int> ans;
        int n = nums.size();
        if(n/3 ==0){
            if(n==2 && nums[0] == nums[1]){
                nums.pop_back();
            }
            return nums;
        }
        else{
            unordered_map<int,int> mp;

            for(int i=0 ; i<n ; i++){
                mp[nums[i]]++;
                if(mp[nums[i]] > n/3 && find(ans.begin() , ans.end() , nums[i]) == ans.end()){
                    ans.emplace_back(nums[i]);
                }
            }
        }
        return ans;
    }
};