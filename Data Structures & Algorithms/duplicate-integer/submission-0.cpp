class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      unordered_map<int, int> s;

      for(int i=0; i<nums.size(); i++){
        if(s[nums[i]] == 1) return true;
        else s[nums[i]]++;
      }  

      return false;
    }
};