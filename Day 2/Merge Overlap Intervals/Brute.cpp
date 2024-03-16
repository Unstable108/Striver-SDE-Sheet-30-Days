class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans;
        if (n == 0) return ans; // If input is empty, return empty vector

        sort(intervals.begin(), intervals.end()); // Sort intervals based on the start point

        // Initialize start and end with the first interval
        int start = intervals[0][0];
        int end = intervals[0][1];

        // Merge intervals
        for (int i = 1; i < n; i++) {
            if (intervals[i][0] <= end) {
                // Overlapping intervals, update the end point
                end = max(end, intervals[i][1]);
            } else {
                // Non-overlapping interval found, push the previous merged interval
                ans.push_back({start, end});
                // Update start and end for the new interval
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        // Push the last merged interval
        ans.push_back({start, end});
        return ans;
    }
};
