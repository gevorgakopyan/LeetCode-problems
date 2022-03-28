class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        if len(s) == 1:
            return False
        for i in range((len(s))):
            if s[i] == '[' or s[i] == '{' or s[i] == '(':
                stack.append(s[i])
            elif len(stack) == 0:
                return False
            elif (s[i] == ']' and stack[len(stack) - 1] != '[')  or (s[i] == '}' and stack[len(stack) - 1] != '{') or(s[i] == ')' and stack[len(stack) - 1] != '('):
                return False
            else:
                stack.pop()
        if len(stack) == 0:
            return True
        return False