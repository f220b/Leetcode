class Solution:
    def reverseDegree(self, s: str) -> int:
        sum = 0
        for i, c in enumerate(s):
            sum += (i + 1) * (ord("z") - ord(c) + 1)

        return sum
