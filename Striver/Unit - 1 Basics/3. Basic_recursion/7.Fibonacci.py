class Solution:
    def fib(self, n: int) -> int:
        if n  <= 1:
            return n
        return self.fib(n-1) + self.fib(n-2)
    
sol = Solution()
n = 8
print(sol.fib(n))