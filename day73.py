lass Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        n = len(nums)
        l =[]
        counter = Counter(nums)
        for num,count in counter.items():
            if count > (n//3):
               l.append(num)
        return l