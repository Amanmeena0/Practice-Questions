class Solution:
    def reverse(self, x: int) -> int:
        reverse = 0
        numberToReversed = abs(x)

        while numberToReversed:
            digit = numberToReversed % 10
            reverse = reverse * 10 + digit
            numberToReversed //= 10

        if x < 0:
            reverse = -reverse

        if reverse < -2**31 or reverse > 2**31 - 1:
            return 0

        return reverse


sol = Solution()
N = -512349
print(sol.reverse(N))