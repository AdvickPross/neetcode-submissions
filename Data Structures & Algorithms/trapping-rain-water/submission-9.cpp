class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int water = 0;
        int maxleft = 0;
        int maxright = 0;
        int l = 0;
        int r = n-1;
        while (l < r) {
            if (height[l] > maxleft) maxleft = height[l];
            if (height[r] > maxright) maxright = height[r];
            int h = (maxleft < maxright) ? maxleft : maxright;
            if (h == maxright) {
                if (height[r] < h) water += h-height[r];
                r--;
            }
            else {
                if (height[l] < h) water += h-height[l];
                l++;
            } 
        }
        // vector<int> mlefts;
        // for (int i = 1; i < n; i++) {
        //     if (height[i-1] > maxleft) maxleft = height[i-1];
        //     mlefts.push_back(maxleft);
        // }
        // for (int i = n-2; i >= 0; i--) {
        //     if (height[i+1] > maxright) maxright = height[i+1];
        //     maxleft = mlefts[i];
        //     int h = (maxleft < maxright) ? maxleft : maxright;
        //     if (height[i] < h) water += h-height[i];
        // }
        return water;
    }
};
