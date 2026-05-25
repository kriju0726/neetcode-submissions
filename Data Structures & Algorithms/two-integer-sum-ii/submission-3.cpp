class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int f=0, l=n-1;

        while(f < l){
            int sum = nums[f] + nums[l];
            if(sum == target) return{f+1, l+1};

            else if(sum > target) l--;
            else f++;
        } 
        
        return {};
    }
};
