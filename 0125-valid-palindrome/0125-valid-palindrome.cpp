class Solution {
public:
    string convert(string s){
        string f = "";
        for(auto word : s){
            if(isalnum(word) && isupper(word)){
                f += word+32;
            }
            else if(isalnum(word)){
                f += word;
            }
        }
        return f;
    }
    bool isPalindrome(string s) {
        string l = convert(s);
        int i=0;
        int j = l.size()-1;

        while(i<j){
            if(l[i] != l[j]) return false;
            i++;
            j--;
        }

        return true;
    }
};