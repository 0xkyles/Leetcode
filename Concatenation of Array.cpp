class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size * 2);

        for (int i = 0; i < size * 2; i++) {
            ans[i] = nums[i % size];
        }

        return ans;
    }
};