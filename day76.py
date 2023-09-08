class Solution:
    def maxLen(self, n, arr):
        #Code here
        
        n = len(arr)
        maxi = 0
        for i in range(n):
            tot = 0
            for j in range(i,n):
                tot += arr[j]
                if tot == 0:
                   maxi = max(maxi,j-i+1)
        return maxi
        
