class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxGain = 0, currGain = 0;
        for (int g : gain) {
            currGain += g;
            maxGain = max(maxGain, currGain);
        }
        return maxGain;
    }
};