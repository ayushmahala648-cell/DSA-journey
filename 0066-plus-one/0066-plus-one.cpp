class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int i=n-1;

        while(1){
            if(digits[i] ==9){
                if(i==0){
                    n++;
                    vector<int> number(n,0);
                    number[0]++;
                    return number;
                }
                digits[i] = 0;
                i--;
                continue;
            }
            digits[i]++;
            break;
        }

        return digits;
    }
};