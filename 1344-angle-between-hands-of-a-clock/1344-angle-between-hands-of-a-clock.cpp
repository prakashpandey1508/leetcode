class Solution {
public:
    double angleClock(int hour, int minutes) 
    { 
          /* we know that hour hand makes 360 degree in 12hrs so that in 1 minutes
          it make 360/12*60=0.5 degree in 1 minutes
          
          just like hour hand ,minutes hand makes 360/60=6 degree in one minutes
          
           calculate difference and take min of both angle 
           
            constraints is so easy that minutes hand <=59minutes 
            
            understandble code is below*/
         
         double hour_angle=(hour*60+minutes)*0.5;
        double minutes_angle=(minutes*6);
        
        double diff_angle=abs(hour_angle-minutes_angle);
          
        double ans=min(360-diff_angle,diff_angle);
        return ans;
        
    }
};