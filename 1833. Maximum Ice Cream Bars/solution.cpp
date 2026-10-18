class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int cnt = 0;
        for (int i = 0; i < costs.size() && coins > 0; i++) {
            if (costs[i] <= coins) {
                cnt++;
                coins -= costs[i];
            }
        }
        return cnt;
    }
};