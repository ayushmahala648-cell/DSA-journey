class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector <int> temp = nums;

        for(int i=0 ; i<n ; i++){
            for(int j =i ; j>0 ; j--){
                if(nums[j]<nums[j-1]){
                    swap(nums[j] , nums[j-1]);
                }
            }
        }

        // now nums contains the sorted vector
        // and the snum contains the original vector

        // myapproach here is it will rotate through every single rotation possible and 
        // in one of those rotation one num will match and it will increase the cnt 
        // when cnt is = n then it is exact equal and hence will print n else will try for other loop.
        int cnt =0;
        for(int d = 0 ; d<n ; d++){
            for(int i = 0 ; i<n ; i++){
                if(nums[i] == temp[(i+d)%n]){
                    cnt++;
                }
            }

            if(cnt == n){
                    return true;
            }else{
                cnt=0;
            }
        }
        return false;
    }
};