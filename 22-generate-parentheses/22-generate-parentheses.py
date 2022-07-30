class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        stack = [];
        res = [];
        def backtrack(openb,closed):
            if openb == closed == n:
                res.append("".join(stack))
                return
            if openb < n:
                stack.append('(')
                backtrack(openb + 1, closed)
                stack.pop()
            if closed < openb:
                stack.append(')')
                backtrack(openb, closed + 1)
                stack.pop()
        backtrack(0,0)
        return res