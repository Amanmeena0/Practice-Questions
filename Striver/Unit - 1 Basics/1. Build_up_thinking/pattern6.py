class Solution:
    def pattern1(self, n):

        for i in range(n, 0,-1):
            for j in range(1,i+1):
                print(j,end=" ")
            print()

sol = Solution()
N = 5
sol.pattern1(N)