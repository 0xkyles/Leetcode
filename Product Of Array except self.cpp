class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //O(n) O(n)
        int size = nums.size();
        vector<int> prefix;
        prefix.reserve(size);

        vector<int> postfix;
        postfix.reserve(size);

        for (int i = 0; i < size; i++) {
            if(i > 0) {
                prefix[i] = (prefix[i - 1] * nums[i]);
            } else {
                prefix[i] = nums[i];
            }
        }

        for (int i = size - 1; i > 0; i--) {
            if(i < size - 1) {
                postfix[i] = postfix[i + 1] * nums[i];
            } else {
                postfix[i] = nums[i];
            }
        }

        for (int i = 0; i < size; i++) {
            int pre = (i > 0) ? prefix[i - 1] : 1;
            int post = (i < size - 1) ? postfix[i + 1] : 1;

            nums[i] = pre * post;
        }

        return nums;
    }
};