class Solution:
    def isUgly(self, n: int) -> bool:
        if n == 0:
            return False
        if n == 1:
            return True
        while n > 1:
            if n % 2 == 0 :
                n /= 2
            if n % 3 == 0:
                n /= 3
            if n % 5 == 0:
                n /= 5
            if not (n % 2 == 0 or n % 3 == 0 or n % 5 == 0) and n != 1:
                return False
        if n == 1:
            return True
                