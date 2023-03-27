class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        retval = 0
        # O(n) solution -- I think since we have a single for loop
        for i in stones:
            if i in jewels:
                retval += 1

        return retval        
