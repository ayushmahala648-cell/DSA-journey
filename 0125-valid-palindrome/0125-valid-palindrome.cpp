class Solution {
public:
    string lower_case(string &s){
        string p = "";
        for(auto val : s){
            if(isdigit(val) ){
                p+=val;
            }
            if(islower(val) ){
                p+=val;
            }
            if(isupper(val) ){
                p+=tolower(val);
            }
        }
        s=p;
        return s;
    }
    bool isPalindrome(string &s) {
        s = lower_case(s);
        int i=0 , j=s.size()-1;

        while(i<=j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
        
        
        
        
        
    }
};