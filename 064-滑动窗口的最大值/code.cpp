class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        deque<pair<int, int>> d;
        vector<int> m;
        if (size <=0 || num.size() < size) {
            return {};
        }
        
        for (unsigned int i = 0; i < size; i++) {
            d.push_back({num[i], i});
        }
        sort(d.begin(), d.end());
        m.push_back(d[d.size() - 1].first);
        for (unsigned int i = size; i < num.size(); i++) {
            while(d.size() && (d[0].first < num[i] || d[0].second <= i - size)) {
                d.pop_front();
            }
            while(d.size() && d[d.size() - 1].second <= i - size) {
                d.pop_back();
            }
            if (d.empty() || d[d.size() - 1].first < num[i]) {
                d.push_back({num[i], i});
            } else {
                d.push_front({num[i], i});
            }
            m.push_back(d[d.size() - 1].first);
        }
        return m;
    }
};