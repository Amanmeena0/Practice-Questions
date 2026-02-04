class Solution:
    def pattern1(self, n):
        for i in range(n):
            if i % 2 == 0: 
                start = 1
            else:
                start = 0
            for j in range(i + 1):
                print(start,end=" ")
                start = 1 - start
            print()

sol = Solution()
N = 5
sol.pattern1(N)