class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = INT_MIN;
        int n = heights.size();

        int i=0, j=n-1;

        while(i < j){
            int h = min(heights[i], heights[j]);
            maxi = max(maxi, h * (j-i));

            if(heights[i] < heights[j]){
                while(i<j && heights[i]<=h) i++;
            }
            else{
                while(i<j && heights[j]<=h) j--;
            }
        }
        return maxi;
    }
};
