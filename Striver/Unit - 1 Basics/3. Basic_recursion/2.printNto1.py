class Solution:
    def printNumbers(self, n):
        if n == 0:
            return
        
        print(n)
        self.printNumbers(n-1)


sol = Solution()
n = int(input("Enter the number:"))
print(sol.printNumbers(n))