# Leet Code 125 - Valid Parentheses
# Ordem de estudo: #4 | Data: 26/11/2026

class Solution:
    def isPalindrome(self, s: str) -> bool:
        cleaned = []

        for char in s:
            if char.isalnum():
                cleaned.append(char.lower())
        cleaned_str = "".join(cleaned)

        left = 0
        right = len(cleaned_str) - 1

        while left < right:
            if cleaned_str[left] != cleaned_str[right]:
                return False
            left += 1
            right -= 1
        return True