class Solution {
public:
    long long coloredCells(int n) {
        long long uppertriangle = (long long)n * n;
        long long lowertriangle = (long long)(n - 1) * (n - 1);
        return uppertriangle + lowertriangle;
    }
};