#include <iostream>
using namespace std;
class PIDControlclass{

    public:
         PIDControlclass(double kp,double ki,double kd,double integrallimit) :kp(kp),ki(ki),kd(kd),integrallimit(integrallimit),pre_error(0.0),integral(0.0){}
    
        double pidcontrol(double curspeed,double targetspeed){
            double error=targetspeed-curspeed;

            integral+=error;
            if(integral>integrallimit) integral=integrallimit;
            else if(integral<-integrallimit)  integral=-integrallimit;

            double der=error-pre_error;

            pre_error=error;

            double result=kp*error+ki*integral+kd*der;

            return result;
    }
    private:
        double kp,ki,kd;
        double pre_error;
        double integral;
        double integrallimit;
 };


