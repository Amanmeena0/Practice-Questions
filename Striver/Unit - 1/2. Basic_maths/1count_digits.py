class Solution:
    def pattern1(self, n):
        counter = 0
        while n > 0:
            digit = n % 10
            n /= 10
            counter += 1

        return counter

sol = Solution()
N = 512349
print(sol.pattern1(N))