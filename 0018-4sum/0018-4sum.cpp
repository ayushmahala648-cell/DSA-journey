class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int a=0,b=a+1,d = n-1,c=d-1;
        vector<vector<int>> answer;
        
        for(int a=0 ; a<n-3 ; a++){

            if(a>0 && nums[a] == nums[a-1]) continue;

            for(int b = a+1 ; b<n-2 ; b++){
                if(b>a+1 && nums[b] == nums[b-1]) continue;

                int c = b+1;
                int d = n-1;
                while(c < d){
                    long long val = (long long)nums[a] + nums[b] + nums[c] + nums[d];
                    if(val == target){
                        vector<int> temp = {nums[a] , nums[b] , nums[c] , nums[d]};
                        answer.emplace_back(temp);
                        c++;
                        d--;
                        while(c<d && nums[c] == nums[c-1]) c++;
                        while(c<d && nums[d] == nums[d+1]) d--;
                    }
                    else if(val >target){
                        d--;
                    }else if(val <target){
                        c++;
                    }
                }
            }
        }

        return answer;
    }
};