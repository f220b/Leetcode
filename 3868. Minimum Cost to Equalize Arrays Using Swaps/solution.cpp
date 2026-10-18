class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> cnt1, total;
        int n = nums1.size();

        for (int i = 0; i < n; i++) {
            cnt1[nums1[i]]++;
            total[nums1[i]]++;
            total[nums2[i]]++;
        }
        int ops = 0;
        for (auto const& [val, freq] : total) {
            if (freq & 1)
                return -1;

            int target = freq >> 1;
            int curr = cnt1[val];

            if (curr > target)
                ops += (curr - target);
        }
        return ops;
    }
};