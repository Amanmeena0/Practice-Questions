class Solution:
    def pattern1(self, n):
        for i in range(2 * n):
            for j in range(n):
                if i % 2 == 0:
                    print(" ", end="")
                else:
                    if j == 0 or j == n-1:
                        print("*", end="")
                    elif i == 1 or i == 2 * n - 1:
                        print("*", end="")
                    else:
                        print(" ", end="")
            print()

sol = Solution()
N = 5
sol.pattern1(N)

