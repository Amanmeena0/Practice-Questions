class Solution:
    def pattern1(self, n):

        for i in range(n,0,-1):
            for j in range(i, 0,-1):
                print("*",end=" ")
            print()


sol = Solution()
N = 5
sol.pattern1(N)