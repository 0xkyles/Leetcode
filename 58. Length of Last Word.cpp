class Solution {
public:
    int lengthOfLastWord(string s) {
        //O(n) O(1)
        int start = s.find_first_not_of(' ');
        int end = s.find_last_not_of(' ');
        s = s.substr(start, end - start + 1);

        return s.size() - (s.find_last_of(' ') + 1);
    }
};