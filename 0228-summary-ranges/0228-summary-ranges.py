class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        if not len(nums): return []
        nums.append(nums[-1]+2)
        arr = []
        start = nums[0]
        n = len(nums)
        for i in range(1,n):
            if nums[i]-nums[i-1] != 1:
                if start == nums[i-1]:
                    arr.append(str(start))
                else:
                    arr.append(f"{start}->{nums[i-1]}")
                start = nums[i]
        return arr