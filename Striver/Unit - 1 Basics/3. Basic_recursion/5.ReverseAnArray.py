class Solution:
    def reverse(self, arr: list, n: int) -> None:
        return self.helper(arr, 0, n - 1)
    def helper(self,arr:list, left:int, right:int)-> None:
        
        if left >= right:
            return 
        
        arr[left], arr[right] = arr[right], arr[left]
        self.helper(arr, left+1, right-1)

sol = Solution()
n = 5
arr = [1,2,3,4,5]
sol.reverse(arr,n)
print(arr)