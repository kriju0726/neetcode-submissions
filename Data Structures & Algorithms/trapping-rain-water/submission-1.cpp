class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans=0;

        for(int i=0; i<n; i++){
            int leftmx = 0, rightmx = 0;

            for(int j=0; j<=i; j++)
                leftmx = max(leftmx, height[j]);

            for(int j=i; j<n; j++)
                rightmx = max(rightmx, height[j]);   

            ans = ans + min(leftmx, rightmx) - height[i];         
        }
        return ans;
    }
};
