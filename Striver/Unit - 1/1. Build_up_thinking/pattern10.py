class Solution:
    def pattern1(self, n):
        for i in range(n-1,0,-1):
            for j in range(n - i , 0, -1):
                print("*",end=" ")
            print()
        for i in range(n):
            for j in range(n - i):
                print("*",end=" ")
            print()


sol = Solution()
N = 5
sol.pattern1(N)