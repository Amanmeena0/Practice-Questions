class Solution:
    def pattern2(self, n):
        
        for i in range(n):
            for j in range(i+1):
                print("*", end=" ")

            print()
    
sol = Solution()
N = 5
sol.pattern2(N)