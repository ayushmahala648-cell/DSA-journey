class Solution {
public:
    int reverse(int x) {
        bool is_negative = false;
        if(x<0){
            is_negative = true;
        } 

        if(x <= INT_MIN || x >= INT_MAX){
            return 0;
        }

        long long int num = (x<0) ? x*(-1) : x;
        long long int reverse=0;
        
        while(num>0){
            int rem = num%10;
            reverse = reverse*10 + rem;
            if(reverse <= INT_MIN || reverse >= INT_MAX){
                return 0;
            }
            num /=10;   
        }

        if(!is_negative){
            return reverse;
        }
        return reverse * (-1);
    }
};