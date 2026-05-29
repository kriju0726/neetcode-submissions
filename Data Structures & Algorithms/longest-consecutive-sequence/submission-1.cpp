class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int ans=0;

        for(int i=0; i<n; i++){
            int k=1;
            while(i+1 < n && (nums[i+1]-1 == nums[i] || nums[i+1] == nums[i])){
                if(nums[i+1]-1 == nums[i]){
                    k++;
                }
                i++;
            }

            ans = max(ans, k);
            
        }
        return ans;
    }
};
