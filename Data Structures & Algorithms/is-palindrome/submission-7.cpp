class Solution {
public:
    bool isPalindrome(string s) {
        int r = s.size()-1, l=0;

        while(l < r){
           while(l<r && !isalnum(s[l])) l++;
           while(l<r && !isalnum(s[r])) r--;

           if(toupper(s[l]) != toupper(s[r])) return false;

           l++; r--;
        }
        return true;
    }
};
