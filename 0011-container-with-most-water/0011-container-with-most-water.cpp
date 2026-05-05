class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i=0 , j=n-1;
        int maxarea =  (n-1)*min(height[i] , height[j]);
        

        while(i<j){
            if(height[i] > height[j]){
                
                maxarea = (max(maxarea ,(j-i) * min(height[i] , height[j]) ));
                j--;
            }
            else{
                maxarea = (max(maxarea ,(j-i) * min(height[i] , height[j]) ));
                i++;;
            }

            
        }
        return maxarea;
    }
};