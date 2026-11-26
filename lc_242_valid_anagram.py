# Leet Code 2 - 242. Valid Anagram
# Ordem de estudo: #2 | Data: 25/11/2026

from collections import Counter

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return Counter(s) == Counter(t)