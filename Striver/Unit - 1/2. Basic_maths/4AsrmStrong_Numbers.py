class Solution:
    def isArmstrong(self, n):
        sum = 0
        counter = 0
        number = n
        temp = n
        while temp:
            counter +=1
            temp //= 10
            
        temp = n
        
        while temp:
            digits = temp % 10
            sum = sum + digits**counter
            temp //= 10

        return sum == number
    
        print()

sol = Solution()
n = 153
print(sol.isArmstrong(n))