class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        if(n==0)
            return true;
        if(flowerbed.size()<=3)
        {
            if(flowerbed.size()==1)
            {
                if(flowerbed[0]==0 && n==1 || n==0)
                    return true;
                else
                    return false;
            }
            if(flowerbed.size()==2)
            {
                if(flowerbed[0]==0 && flowerbed[1]==0)
                {
                    if(n==0 || n==1)
                        return true;
                    else
                        return false;
                }
                else if(n==0)
                    return true;
                else
                    return false;
            }
            if(n==3)
            {
                if(flowerbed[0]==0 && flowerbed[1]==0 && flowerbed[2]==0)
                {
                    if(n<=2)
                        return true;
                    else
                        return false;
                }
                else if(n==0)
                    return true;
                else
                    return false;
            }
        }
          for(int i=0;i<flowerbed.size();i++)
          {
              if(flowerbed[i]==0 && i==0)
              {
                  if(flowerbed[i+1]==0)
                  {
                     flowerbed[i]=1;
                      n--;
                      if(n==0)
                          return true;
                  }
                  
              }
              else if(flowerbed[i]==0 && i!=flowerbed.size()-1)
              {
                  bool left=flowerbed[i] || flowerbed[i-1];
                  bool right=flowerbed[i] || flowerbed[i+1];
                  if(!(left || right))
                  {
                      flowerbed[i]=1;
                      n--;
                      if(n==0)
                          return true;
                  }
                      
                      
              }
              else if(flowerbed[i]==0 && i==flowerbed.size()-1)
              {
                  if(flowerbed[i-1]==0)
                  {
                      n--;
                      if(n==0)
                          return true;
                  }
              }
          }
        if(n==0)
            return true;
        else
            return false;
    }
};