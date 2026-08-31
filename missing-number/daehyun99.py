# Time: O(N)
# Space: O(1)
class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        base = 0
        for i in range(len(nums)+1):
            base += i
        for num in nums:
            base -= num
        return base        
