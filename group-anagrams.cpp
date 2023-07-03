class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> map;
        vector<vector<string>> res;
        string temp;

        for (int i = 0; i < strs.size(); i++) {
            temp = strs[i];
            sort(strs[i].begin(), strs[i].end());

            if(map.find(strs[i]) == map.end()) {
                map[strs[i]] = res.size();
                res.push_back({});
            }

            res[map[strs[i]]].push_back(temp);
        }

        return res;
    }
};