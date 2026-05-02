class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector <int> ans;
        int n = nums.size();
        int ele1,ele2,cnt1=0,cnt2=0;

        for(int i=0 ; i<n ; i++){
            if(cnt1==0 && nums[i] != ele2){
                ele1 = nums[i];
                cnt1=1;
            }
            else if(cnt2==0 && nums[i] != ele1){
                ele2 = nums[i];
                cnt2=1;
            }
            else if(ele1 == nums[i]){
                cnt1++;
            }
            else if(ele2 == nums[i]){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
            
        }

        cnt1 = cnt2 = 0;

        for(int i=0 ; i<n ; i++){
            if(ele1 == nums[i]) cnt1++;
            if(ele2 == nums[i]) cnt2++;
        }

        if(cnt1 >n/3) ans.emplace_back(ele1);
        if(cnt2 >n/3 && ele1 != ele2) ans.emplace_back(ele2);

        
        return ans;
    }
};