class Solution:
    def printNumbers(self, n):
        if n == 0:
            return
        
        self.printNumbers(n-1)

        print(n)

sol = Solution()
n = int(input("Enter the number:"))
print(sol.printNumbers(n))