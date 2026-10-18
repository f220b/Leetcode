class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int mid = n >> 1, cnt = 0;

        for (int i : nums) {
            if (i == nums[mid])
                cnt++;
        }
        return cnt == 1;
    }
};