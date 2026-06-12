class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = INT_MIN;
        int n = heights.size();

        int i=0, j=n-1;

        while(i < j){
            int res = min(heights[i], heights[j]) * (j-i);
            maxi = max(maxi, res);

            if(heights[i] < heights[j]) i++;
            else j--;
        }
        return maxi;
    }
};
