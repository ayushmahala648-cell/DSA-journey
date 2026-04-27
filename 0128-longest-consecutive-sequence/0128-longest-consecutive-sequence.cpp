class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> st;
        int cnt=1 , maxcnt = 0;
        for(auto val : nums){
            st.emplace(val);
        }

        for(auto val : st){
            if(st.count(val-1)){
                continue;
            }
            else{
                int num = val;
                while(st.count(num+1)){
                    num++;
                    cnt++;
                }
            }
            maxcnt = max(maxcnt , cnt);
            cnt=1;
        }
        return maxcnt;
    }
};