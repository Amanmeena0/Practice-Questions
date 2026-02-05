class Solution:
    def pattern1(self, n):
        for i in range(2 * n):
            for j in range(2*n):
                top = i
                left = j
                bottom = (2 * n - 1) - i
                right = (2 * n - 1) - j

                minDigit = min(top, bottom, left, right)

                print(n - minDigit,end="")
            print()

sol = Solution()
N = 5
sol.pattern1(N)