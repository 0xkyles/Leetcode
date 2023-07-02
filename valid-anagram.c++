class Solution {
public:
    bool isAnagram(string s, string t) {
        //O(n) O(n)
        if(s.size() != t.size()) return false;

        unordered_map<char, int> map;

        for (int i = 0; i < s.size(); i++) {
            map[s[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {
            if(map.find(t[i]) == map.end()) return false;
            if(map[t[i]] == 0) return false;
            map[t[i]]--;
        }

        return true;



        // O(nlogn) O(1)
        // if(s.size() != t.size()) return false;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // return s == t;
    }
};