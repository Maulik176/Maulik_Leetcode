class Solution(object):
    def scoreOfParentheses(self, s):
        stack = []
        ans = 0
        for char in s:
            if char == '(':
                stack.append(ans)
                ans = 0
            else:
                ans = stack.pop() + max(1, ans*2)
        return ans 