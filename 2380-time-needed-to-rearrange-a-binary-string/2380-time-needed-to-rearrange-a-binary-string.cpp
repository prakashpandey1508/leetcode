class Solution {
public:
    int secondsToRemoveOccurrences(string s) 
    {
          int n=s.size();
        int cnt=0,x=0;
        
        int swap=0;
        string ans=s;
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
       // cout<<ans<<endl;
        while(1)
        {
            int cnt=0;
          for(int i=0;i<n;i++)
          { 
              
              if(s[i]=='0' && s[i+1]=='1')
              {
                  char x=s[i];
                  s[i]=s[i+1];
                  s[i+1]=x;
                  //swap++;
                  i++;
                 // cout<<s[i]<<s[i+1]<<endl;
                //  cout<<s<<endl;
                  cnt=1;
                  
              }
              
              if(s==ans)
              {
                  
                break;
              }
              
          }
           // cout<<s<<endl;
            if(cnt==1)
            {
                x++;
                swap++;
            }
            if(swap==0)
                break;
            if(s==ans)
                break;
        }
        return x;
    
    }
};