class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int n = heights.size();
        int i = 0;
        int j = n-1;
        while(i < j) {
            int currentmax = 0;
            int h = (heights[i] < heights[j]) ? heights[i] : heights[j];
            int w = abs(i-j);
            int area = h*w;
            if (area > max) max = area;
            else if (h == heights[i]) i++; 
            else j--;
        }
        return max;
    }
};
