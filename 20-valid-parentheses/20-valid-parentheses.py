class Solution:
    def isValid(self, s: str) -> bool:
        map = {
            "(": ")",
            "{": "}",
            "[": "]",
        }
        stack = []
        for bracket in s:
            if bracket in map:
                stack.append(bracket)
            elif not stack or map[stack.pop()] != bracket:
                return False
        return len(stack) == 0