class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int i=0 , j=n-1;
        int ans1,ans2;
        while(j>0){
            if(colors[i] != colors[j]){
                ans1 = j-i;
                break;  
            }
            j--;
        }
        i=0,j=n-1;
        while(i<n){
            if(colors[i] != colors[j]){
                ans2 = j-i;
                break;
            }
            i++;
        }
        if(ans1>ans2){
            return ans1;
        }else{
            return ans2;
        }

    }
};