class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int water = 0;
        int maxleft = 0;
        vector<int> mlefts;
        int maxright = 0;
        for (int i = 1; i < n; i++) {
            if (height[i-1] > maxleft) maxleft = height[i-1];
            mlefts.push_back(maxleft);
            // for (int j = i; j < n; j++) {
            //     if (height[j] > maxright) maxright = height[j];
            // }
            // int h = (maxleft < maxright) ? maxleft : maxright;
            // if (height[i] < h) water += h-height[i];
        }
        for (int i = n-2; i >= 0; i--) {
            if (height[i+1] > maxright) maxright = height[i+1];
            maxleft = mlefts[i];
            int h = (maxleft < maxright) ? maxleft : maxright;
            if (height[i] < h) water += h-height[i];
        }
        return water;
    }
};
