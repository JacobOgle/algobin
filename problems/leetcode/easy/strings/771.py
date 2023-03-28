class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        retval = 0
        # O(n) solution -- I think since we have a single for loop
        for i in stones:
            if i in jewels: # Does this add additional layer to the time complexity by lookup in jewels? Would this truly be O(n^2)?
                retval += 1

        return retval        
