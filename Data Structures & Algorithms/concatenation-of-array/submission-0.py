class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        lans=[]
        for i in range(len(nums)*2):
            if i >= len(nums):
                lans.append(nums[i-len(nums)])
            else:
                lans.append(nums[i])

        return lans

            
