class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;

        for(int i : nums) mp[i]++;
        
        vector<int> count;

        for(auto &it : mp) count.push_back(it.second);

        sort(count.begin(), count.end(), greater<int>());

        vector<int> res;

        for(int i=0; i<k; i++){
            for(auto it=mp.begin(); it!=mp.end(); it++){
                if(it->second == count[i]){
                    res.push_back(it->first);
                    mp.erase(it);
                    break;
                }
            }
        }

        return res;
    }
};
