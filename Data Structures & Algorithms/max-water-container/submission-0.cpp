class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = INT_MIN;
        int n = heights.size();

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int res = min(heights[j], heights[i]) * (j-i);
                maxi = max(maxi, res);
            }
        }
        return maxi;
    }
};
