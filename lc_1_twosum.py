# Leet Code 1 - Two Sum
# Ordem de estudo: #1 | Data: 24/11/2026

class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seen = {}

        for i, num in enumerate(nums):
            need = target - num 

            if need in seen:
                return [seen[need], i]
            seen[num] = i
