class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int idx = n - 1;

        while (idx >= 0 && digits[idx] == 9) {
            digits[idx] = 0;
            idx--;
        }
        if (idx >= 0) {
            digits[idx]++;
        } else {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
