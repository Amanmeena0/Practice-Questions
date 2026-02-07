class Solution:
    
    def FactorialOFnumber(self, n):
        if n == 1:
            return 1 * n
        return n*self.FactorialOFnumber(n-1)

sol = Solution()
n = int(input("Enter the number: "))
print(sol.FactorialOFnumber(n))