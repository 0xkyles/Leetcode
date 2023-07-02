class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //O(n) O(n)
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            if(map.find(temp) != map.end()) return {i, map[temp]};
            map[nums[i]] = i;
        }

        return {};

        // O(n^2) O(1)
        // int sum;
        // for (int i = 0; i < nums.size() - 1; i++) {
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         sum = nums[i] + nums[j];
        //         if(sum == target) return {i, j};
        //     }
        // }

        // return {};
    }
};