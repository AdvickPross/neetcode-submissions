class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> zipped;
        for (int i = 0; i < n; i++) {
            zipped.push_back({position[i], speed[i]});
        }
        sort(zipped.begin(),zipped.end(),greater<pair<int,int>>());
        stack<double> times;
        for (int i = 0; i < n; i++) {
            int position = zipped[i].first;
            double speed = zipped[i].second;
            double time = (target - position) / speed;
            if (times.empty()) {
                times.push(time);
            } else {
                if (time > times.top()) {
                    times.push(time);
                }
            }
        }
        int count = 0;
        while (!times.empty()) {
            count++;
            times.pop();
        }
        return count;
    }
};
