class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for x in range(len(nums)):
            for y in range(x+1, len(nums)):
                #print("%d %d" %(nums[x],nums[y]))
                if (nums[x]+nums[y]) == target:
                    return [x,y]
        pass