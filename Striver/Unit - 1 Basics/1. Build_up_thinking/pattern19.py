class Solution:
    def pattern1(self, n):
        for i in range(n):
            for j in range(n - i ):
                print("*",end="")
            for j in range(2 * i + 1):
                print(" ",end="")
            for j in range(n-i):
                print("*",end="")
            print()
        for i in range(n,0,-1):
            for j in range(n - i + 1 , 0, -1):
                print("*",end="")
            for j in range(2 * i - 1, 0 , -1):
                print(" ",end="")
            for j in range(n - i + 1  , 0, -1):
                print("*",end="")
            print()

sol = Solution()
N = 5
sol.pattern1(N)
