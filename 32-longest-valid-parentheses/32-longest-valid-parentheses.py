class Solution:
    def longestValidParentheses(self, s: str) -> int:
        max_length = 0 #final answer 
        st = [-1] #empty stack 
        for i in range(len(s)):
            if s[i] == "(":
                st.append(i)
            else:
                st.pop()
                if not st:
                    st.append(i)
                else:
                    max_length=max(max_length, i-st[-1]) 
        return max_length
    

                