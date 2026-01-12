class Solution:
    def pattern1(self, n):

        for i in range(n):
            for j in range(0, n):
                print("*",end=" ")
            print()


sol = Solution()
N = 5
sol.pattern1(N)