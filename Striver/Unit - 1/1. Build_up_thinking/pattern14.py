class Solution:
    def pattern1(self, n):
        for i in range(n):
            ch = ord('A')
            for j in range(i+1):
                print(chr(ch+j),end=" ")
            print()

sol = Solution()
N = 5
sol.pattern1(N) 