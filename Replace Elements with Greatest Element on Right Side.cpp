class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size();
        int currentGreatest = arr[size - 1];
        arr[size - 1] = -1;
        
        int temp;
        for (int i = size - 2; i>=0; i--) {
            temp = arr[i];
            arr[i] = currentGreatest;
            currentGreatest = max(temp, currentGreatest);
        }

        return arr;
    }
};