class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;

        for(int i=0; i<nums.size(); i++){
            int pdt=1;
            for(int j=0; j<nums.size(); j++){
                if(i == j) continue;
                else{
                    pdt *= nums[j];
                }
            }
            res.push_back(pdt);
        }
        return res;
    }
};
