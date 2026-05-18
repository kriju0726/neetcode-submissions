class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        // Step 1: Count frequency
        for(int num : nums) {
            mp[num]++;
        }

        // Step 2: Create buckets
        // index = frequency
        vector<vector<int>> bucket(nums.size() + 1);

        for(auto it : mp) {
            int freq = it.second;
            int num = it.first;

            bucket[freq].push_back(num);
        }

        // Step 3: Traverse buckets from high freq to low
        vector<int> res;

        for(int i = bucket.size() - 1; i >= 0 && res.size() < k; i--) {

            for(int num : bucket[i]) {
                res.push_back(num);

                if(res.size() == k)
                    return res;
            }
        }

        return res;
    }
};
