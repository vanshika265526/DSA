//Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            } else {
                if (stk.empty()) {
                    return false;
                }
                if (c == ')' && stk.top() != '(') {
                    return false;
                }
                if (c == '}' && stk.top() != '{') {
                    return false;
                }
                if (c == ']' && stk.top() != '[') {
                    return false;
                }
                stk.pop();
            }
        }

        return stk.empty(); // if stack is empty, all parentheses were matched
    }
};
