class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<pair<int,int>> cords;
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(matrix[i][j] == 0){
                    cords.emplace_back(i,j);
                }
            }
        }
        for(auto val : cords){
            for(int k=0 ; k<n ; k++){
                matrix[val.first][k] = 0;   // correct
            }

            for(int k=0 ; k<m ; k++){
                matrix[k][val.second] = 0;  // correct
            }
        }    
    }
};