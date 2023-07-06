class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;

        vector<int> res(nums.size() - k + 1);

        for (int i = 0; i < k; i++) {
            while(!dq.empty() && dq.back() < nums[i]) {
                dq.pop_back();
            }

            dq.push_back(nums[i]);
        }
        res[0] = dq.front();

        int start = 1;
        int end = k;
        while(end < nums.size()) {
            if(nums[start - 1] == dq.front()) dq.pop_front();
            while(!dq.empty() && dq.back() < nums[end]) {
                dq.pop_back();
            }

            dq.push_back(nums[end]);
            res[start] = dq.front();
            start++;                 
            end++;
        }

        return res;
    } 
};