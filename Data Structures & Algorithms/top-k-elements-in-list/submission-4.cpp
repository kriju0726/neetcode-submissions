class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int i: nums){
            mp[i]++;
        }

        vector<vector<int>> bucket(nums.size()+1);

        for(auto &it : mp){
            int freq = it.second;
            bucket[freq].push_back(it.first);
        }

        vector<int> res;

        for(int i=bucket.size()-1; i>=0; i--){
            for(int num : bucket[i]){
                res.push_back(num);

                if(res.size() == k) return res;
            }
        }

        return res;
    }
};
