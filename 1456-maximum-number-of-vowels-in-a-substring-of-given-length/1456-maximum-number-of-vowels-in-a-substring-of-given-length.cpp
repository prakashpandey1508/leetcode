class Solution {
public:
    int maxVowels(string s, int k) 
    {
    
       int i=0;
        int mx=0;
        int cnt=0;
        int n=s.size();
        for(int j=0;j<n;j++)
        {
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            {
                cnt++;
            }
             mx=max(mx,cnt);
             if((j-i+1)==k)
            {
             
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                cnt--;
            }
                i++;
            }
             
            
    }
        
        return mx;
    }   
};