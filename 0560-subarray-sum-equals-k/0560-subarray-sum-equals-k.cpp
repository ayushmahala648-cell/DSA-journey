class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt=0;
        unordered_map<int ,  int> mp;
        int curr=0;
        mp[0]=1;
        for(int i=0 ; i<n ; i++){
            curr +=nums[i];
            if(mp.count(curr-k)){
                cnt += mp[curr-k];
            }
            mp[curr] +=1;
        }
        return cnt;
    }
};