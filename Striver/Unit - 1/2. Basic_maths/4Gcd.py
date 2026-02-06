class Solution:
    def GCD(self, n1, n2):
        while n2:
            n1, n2 = n2, n1 % n2
        return n1
        


sol = Solution()
n1 = 4
n2 = 6

print(sol.GCD(n1,n2))