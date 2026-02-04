class Solution:
    def pattern1(self, n):
        for i in range(n):
            ch = ord('A') + n - i  
            for j in range(i):
                print(chr(ch),end=" ")

            print()

sol = Solution()
N = 5
sol.pattern1(N)
