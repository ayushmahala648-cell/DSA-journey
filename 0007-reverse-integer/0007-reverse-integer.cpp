class Solution {
public:
    int reverse(int x) {

        int num = x;
        int reverse=0;
        
        while(num){
            if(reverse < INT_MIN/10 || reverse > INT_MAX/10){
                return 0;
            }   
            int rem = num %10;
            reverse = reverse *10 +rem;
            num/=10;
        }

        return reverse;
    }
};