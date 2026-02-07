class Solution:
    def pattern1(self, n):
        for i in range(n-1):

            for j in range(n-i-1):
                print(" ",end="")

            char = ord('A')
            breakpoint = (2*i + 1)//2

            for j in range(1,2*i+2):
                print(chr(char),end="")
                if j <= breakpoint:
                    char+=1
                else:
                    char-=1

            print()

sol = Solution()
N = 5
sol.pattern1(N)