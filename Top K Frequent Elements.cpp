class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // USING HT, PQ (heap)
        unordered_map<int, int> map;
        for (const auto& x : nums) {
            map[x]++;
        }

        auto compare = [&](const int one, const int two) {
            return map[one] < map[two];
        };

        priority_queue<int, vector<int>, decltype(compare)> pq(compare);
        for (const auto& p : map) {
            pq.push(p.first);
        }

        vector<int> res;
        res.reserve(k);
        while(k--) {
            res.push_back(pq.top());
            pq.pop();
        }

        return res;


        // USING HT, sort, O(nlogn) O(n)
        // unordered_map<int, int> map;
        // for (const auto& x : nums) {
        //     map[x]++;
        // }

        // vector<int> res;
        // res.reserve(map.size());

        // for (const auto& p : map) {
        //     res.push_back(p.first);
        // }

        // auto comparator = [&] (const int one, const int two) {
        //     return map[one] > map[two];
        // };

        // sort(res.begin(), res.end(), comparator);
        // res.resize(k);

        // return res;
    }
};