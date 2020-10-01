/*Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

1.Open brackets must be closed by the same type of brackets.
2.Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.*/


class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stk;  
        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            if(stk.empty())
            {
                if(s[i]==')' || s[i]=='}' || s[i]==']')
                    return false;
            }
            
            if(s[i]==')')
            {
                if(stk.top()!='(')
                    return false;
                stk.pop();
            }
            
            else if(s[i]=='}')
            {
                if(stk.top()!='{')
                    return false;
                stk.pop();
            }
            
            else if(s[i]==']')
            {
                if(stk.top()!='[')
                    return false;
                stk.pop();
            }
            
            else
            {
                stk.push(s[i]);
            }
        }
        if(stk.size()==0)
            return true;
        return false;
    }
}
