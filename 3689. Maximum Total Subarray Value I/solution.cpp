class Solution {
public:
    using ll = long long;
    using vi = vector<int>;
    using vll = vector<long long>;

    long long maxTotalValue(vector<int>& nums, int k) {
        int maxEle = *max_element(nums.begin(), nums.end());
        int minEle = *min_element(nums.begin(), nums.end());

        return k * (ll(maxEle - minEle));
    }
};