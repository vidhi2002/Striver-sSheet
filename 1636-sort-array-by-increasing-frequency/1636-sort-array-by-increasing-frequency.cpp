class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> m;
        for (auto num: nums) {
            m[num]++;
        }
        priority_queue<pair<int, int>> pq;
        for (auto i: m) {
            pq.push(make_pair(-1*i.second, i.first));
        }
        vector<int> result;
        while(!pq.empty()) {
            auto i = pq.top();
            pq.pop();
            while(i.first) {
                result.push_back(i.second);
                i.first++;
            }
        }
        return result;
    }
};