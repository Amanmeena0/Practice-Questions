class Solution:
    def pattern1(self, n):
        for i in range(n):
            ch = ord('A') + i
            for i in range(i+1):
                print(chr(ch),end=" ")

            print()

sol = Solution()
N = 5
sol.pattern1(N)