class Solution(object):
    def beautifulSubarrays(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums) 
        cnt = 0
        for i in range(n):
            for j in range(i, n):

                xorr = 0
                for K in range(i, j + 1):
                    xorr = xorr ^ nums[K]

                if (xorr == 0):
                    cnt += 1

        return cnt
    