class Solution {
public:
    bool isValid(string s) 
    {
        if(s.size()==0)
            return true;
        stack<char>stk;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                stk.push(s[i]);
            else
            {
                if(stk.empty())
                    return false;
                else if(stk.top()=='(' && s[i]==')')
                    stk.pop();
                else if(stk.top()=='[' && s[i]==']')
                    stk.pop();
                else if(stk.top()=='{' && s[i]=='}')
                    stk.pop();
                else
                    return false;
            }
        }
        if(!stk.empty())
            return false;
        return true;
        
    }
};