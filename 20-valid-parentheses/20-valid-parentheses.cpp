class Solution {
public:
    bool isValid(string s) 
    {
        char brackets[s.size()], temp;
        int flag = 1, top=-1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                brackets[++top] = s[i];
            if(s[i]==')' || s[i]==']' || s[i]=='}')
            {
                if(top == -1)
                    flag=0;
                else
                {
                    temp = brackets[top--];
                    if(s[i]==')' && (temp=='{' || temp=='['))
                        flag = 0;
                    else if(s[i]==']' && (temp=='(' || temp=='{'))
                        flag = 0;
                    else if(s[i]=='}' && (temp=='(' || temp=='['))
                        flag = 0;
                    if(flag==0)
                        break;
                }
            }
        }
        if(flag == 0 || top != -1)
            return false;
        return true;
    }
};