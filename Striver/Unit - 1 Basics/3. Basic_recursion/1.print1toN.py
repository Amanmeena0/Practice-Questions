class Solution:
    def isPrime(self, n):
        if n == 0:
            return False
        if n == 1:
            return True
        for i in range(2,n):
            if n % i == 0:
                return False
        return True

        print()

sol = Solution()
n = int(input("Enter the number:"))
print(sol.isPrime(n))