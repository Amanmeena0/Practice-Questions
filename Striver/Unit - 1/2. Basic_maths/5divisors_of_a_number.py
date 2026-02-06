class Solution:
    def divisors(self, n):

        outPutArray = []
        for i in range(1,n):
            if n % i == 0:
                outPutArray.append(i)
                
        outPutArray.append(n)
        return outPutArray
        print()

sol = Solution()
n = int(input("Enter the Number: "))
print(sol.divisors(n))