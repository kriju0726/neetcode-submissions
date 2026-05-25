class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        if(n==1) return true;

        int f=0, l=n-1;
        while(f < l){
            while(f<l && (!isalnum(s[f]))) f++;
            while(f<l && (!isalnum(s[l]))) l--;

            if(tolower(s[f]) != tolower(s[l]))   return false;
            f++; l--;
        }

        return true;
    }
};
