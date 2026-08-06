class Solution {
public:
    int fib(int n) {
        vector <int> fib(n+1);
        

        for(int i=0 ; i<=n ; i++){
            if(i==0) fib[0]= 0 ;
            else if(i==1) fib[1] = 1;

            else {fib[i] = fib[i-1] + fib[i-2];}
        }
        return fib[n];
    }
};