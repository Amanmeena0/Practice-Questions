class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = ''.join(ch.lower() for ch in s if ch.isalnum())
        return self.helper(s, 0, len(s) - 1)
    
    def helper(self, s: str, left:int, right:int)->bool:
        if left >= right:
            return True
        if s[left] != s[right]:
            return False
        return self.helper(s, left + 1, right - 1)
        
sol = Solution()
s = "A man, a plan, a canal: Panama"
print(sol.isPalindrome(s))