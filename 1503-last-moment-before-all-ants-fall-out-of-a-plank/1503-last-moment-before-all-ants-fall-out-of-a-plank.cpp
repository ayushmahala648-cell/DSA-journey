class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        

        int low=INT_MAX , high = INT_MIN;

        for(auto val : left){
            //find the mmax for left
            if(val>high){
                high = val;
            }
        }

        for(auto val : right){
            //find the smallest for right
            if(val<low){
                low = val;
            }
        }
        
        return max(high , n-low);
        
        
    }
};