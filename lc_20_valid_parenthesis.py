# Leet Code 20 - Valid Parentheses
# Ordem de estudo: #3 | Data: 26/11/2026

class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        pairs = {"(": ")", "[": "]", "{": "}"}

        for char in s:
            if char in pairs:
                stack.append(char)
            elif char in pairs.values():
                if not stack or char != pairs[stack[-1]]:
                    return False
                stack.pop()

        return not stack
