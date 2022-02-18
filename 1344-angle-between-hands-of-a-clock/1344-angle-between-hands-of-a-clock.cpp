class Solution {
public:
    double angleClock(int hour, int minutes) 
    {
         double hour_angle=(hour*60+minutes)*0.5;
        double minutes_angle=(minutes*6);
        
        double diff_angle=abs(hour_angle-minutes_angle);
          
        double ans=min(360-diff_angle,diff_angle);
        return ans;
        
    }
};