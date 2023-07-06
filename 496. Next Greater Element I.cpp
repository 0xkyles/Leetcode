class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        int size = nums2.size();

        for (int i = 0; i < size; i++) {
            map[nums2[i]] = i;
        }

        stack<int> stack;
        stack.push(nums2[size - 1]);
        nums2[size - 1] = -1;
        int temp;

        for(int i = size - 2; i >= 0; i--) {
            while(!stack.empty() && stack.top() <= nums2[i]) {
                stack.pop();
            }

            temp = nums2[i];
            if(!stack.empty()) nums2[i] = stack.top();
            else nums2[i] = -1;
            stack.push(temp);
        }

        for (int i = 0; i < nums1.size(); i++) {
            nums1[i] = nums2[map[nums1[i]]];
        }

        return nums1;
    }
};