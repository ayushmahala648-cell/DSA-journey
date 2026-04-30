class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector <int> ans;

        int top=0 , left=0 , bottom = rows-1 , right = cols-1;

        while(top<=bottom && left<=right){
            //print top elements
            for(int i=left ; i<=right ; i++){
                ans.emplace_back(matrix[top][i]);
            }
            top++;

            // printing right elements     
            for(int i=top ; i<=bottom ; i++){
                ans.emplace_back(matrix[i][right]);
            }
            right--;

            if(top<=bottom){
                //printing bottom elements
                for(int i=right ; i>=left ; i-- ){
                    ans.emplace_back(matrix[bottom][i]);
                }
                bottom--;
            }    

            if(left<=right){
                //printing left element
                for(int i=bottom ; i>=top ; i--){
                    ans.emplace_back(matrix[i][left]);
                }
                left++;
            }

        }
        
        return ans;
    }
};