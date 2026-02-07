class Solution:
    def printNumbers(self, n):
        if n == 0:
            return 0

        return n + self.printNumbers(n-1)


sol = Solution()
n = int(input("Enter the number:"))
print(sol.printNumbers(n))