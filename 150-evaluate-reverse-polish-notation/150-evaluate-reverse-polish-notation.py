class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for i in tokens:
            if i not in "+-/*":
                stack.append(int(i))
                continue
            
            val2 = stack.pop()
            val1 = stack.pop()
            result = 0
            if i == "+":
                result = val1+ val2
            elif i == "-":
                result = val1 - val2
            elif i == "*":
                result = val1 * val2
            else:
                result = val1 / val2
            stack.append(int(result))
        return stack.pop()
        
        