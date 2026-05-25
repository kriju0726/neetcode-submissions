class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        if(n==1) return true;

        int f=0, l=n-1;
        transform(s.begin(), s.end(), s.begin(), ::toupper);

        while(f<l){
            if(!isalnum(s[f]) || s[f]==' ') f++;
            else if(!isalnum(s[l]) || s[l]==' ') l--;
            else{
                if(s[f] != s[l]) return false;
                else{ f++; l--;}
            }

        }
        return true;
    }
};
