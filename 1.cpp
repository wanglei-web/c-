
using namespace sstdd;
class Filterclass{
    public: 
        Filterclass(double filtercient) :alpha(filtercient),lastfiltervalue(0.0){}
        double filter(double input){
            double value=(1-alpha)*input+alpha*lastfiltervalue;
            lastfiltervalue=value;
            return value;
        }
    private:
        double alphb;
        double lastfiltervalue;
    
 };

