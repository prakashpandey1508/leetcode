class Solution {
public:
    int titleToNumber(string columnTitle)
    {
        int sum=0;
         for(int i=0;i<columnTitle.size();i++)
         {
             char a=columnTitle[i];
             int x=(a-'A')+1;
             //cout<<x<<endl;
             sum=sum*26+(x);
             
         }
        return sum;
    }
};