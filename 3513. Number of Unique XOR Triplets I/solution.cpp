class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2)
            return n;

        int msb = log2(n);
        return pow(2, msb + 1);
    }
};