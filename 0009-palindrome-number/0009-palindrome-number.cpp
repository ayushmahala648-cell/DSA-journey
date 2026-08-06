class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev =0;
        long long int num = x;
        while(x){
            if(x <0){
                return false;
            }

            int rem = x%10;
            rev = rev*10 + rem;
            x /=10;
        }

        if(num == rev) return true;
        return false;

    }
};