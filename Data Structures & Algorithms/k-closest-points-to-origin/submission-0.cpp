class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int, pair<int, int>>> pq;

        for (auto& point : points) {
            int distSquared = point[0] * point[0] + point[1] * point[1];
            pq.push({distSquared, {point[0], point[1]}});
            if (pq.size() > k) {
                pq.pop();
            }
        }

        vector<vector<int>> results;
        while (!pq.empty()) {
            auto p = pq.top();
            pq.pop();
            results.push_back({p.second.first, p.second.second});
        }

        return results;
    }
    };
