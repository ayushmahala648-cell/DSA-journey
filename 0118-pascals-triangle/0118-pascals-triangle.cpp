class Solution {
public:
    int pascal(int r , int i){
        long long val=1;
        long long div=1;
        if(i >= r/2){
            i = r-i-1;
        }

        for(int k=i ; k>0 ; k--){
            r--;
            val *= r;
            div *=k;
        }

        return val/div;
    }
    // void pascalrows (vector <int> &currentrow , int r){
        
    //     for(int i=0 ; i<r ; i++){
    //         currentrow.emplace_back(pascal(r,i));
    //     }
    // }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int r=1 ; r<=numRows ; r++){
            vector<int> currentrow;
            long long val=1;
            for(int i=0 ; i<r ; i++){
                currentrow.emplace_back(val);
                val *= (r-i-1);
                val /= (i+1);
            }
            ans.emplace_back(currentrow);
        }
        return ans;
    }
};