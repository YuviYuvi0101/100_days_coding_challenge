class Solution(object):
    def merge(self, arr):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        n = len(arr)
        ans = []
        arr.sort()
        for i in range(n):
            start,end = arr[i][0],arr[i][1]
            if ans and end <= ans[-1][1]:
                continue
            for j in range(i+1,n):
                if end >= arr[j][0]:
                    end = max(end,arr[j][1])
                else:
                    break
            ans.append([start,end])
        return ans