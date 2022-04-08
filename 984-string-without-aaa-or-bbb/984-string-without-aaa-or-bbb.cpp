class Solution {
public:
    string strWithout3a3b(int a, int b)
    {
          int sz=a+b;
        string ans="";
         int cnta=0;
        int cntb=0;
        while(a && b)
        {
            if(a>b)
            {
                ans+="aab";
                a--;
            }
            else if(b>a)
            {
                ans+="bba";
                b--;
            }
            else
            {
                ans+="ab";
            }
            a--;
            b--;
        
        }
        if(b!=0)
        {
            for(int i=0;i<b;i++)
                ans+="b";
        }
        if(a!=0)
        {
            for(int i=0;i<a;i++)
                ans+="a";
        }
        return ans;
        
    }
};