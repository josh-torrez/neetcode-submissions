class Solution:
    def sortColors(self, nums: List[int]) -> None:
        color = [0,0,0]
        for num in nums:
            color[num] +=1
        index = 0
        for i in range(3):
            while color[i]:
                color[i] -=1
                nums[index] = i
                index +=1
        