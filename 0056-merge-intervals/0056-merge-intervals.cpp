class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end());
        int n = intervals.size();
        vector <vector<int>> ans;

        ans.emplace_back(intervals[0]);
        int j=0;
        for(int i=0 ; i<n ; i++){
            if(intervals[i][0] <= ans[j][1]){
                ans[j][1] = max(ans[j][1],intervals[i][1]);
            }
            else{
                ans.emplace_back(intervals[i]);
                j++;
            }
            
        }
        return ans;

    }
};