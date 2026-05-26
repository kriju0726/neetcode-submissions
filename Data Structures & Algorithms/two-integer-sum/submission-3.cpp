class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            int miss = target - nums[i];
            auto it = mp.find(miss);
            if(it != mp.end()){
                return {mp[miss], i};
            }

            mp[nums[i]] = i;
        }
        return {0, 0};
    }
};
