class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int n = numbers.size();

        // if(target > numbers[n-1] || target<numbers[0]) return res;

        // int f=0, l=n-1;
        for(int i=0; i<n; i++){
            int other = target - numbers[i];
            for(int j=i+1; j<n; j++){
                if(numbers[j] == other){
                    res.push_back(i+1);
                    res.push_back(j+1);
                    return res;
                }
            }
        }

        return res;
        
    }
};
