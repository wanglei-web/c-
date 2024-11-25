#include <iostream>
using namespace std;
class Filterclass{
    public: 
        Filterclass(double filtercient) :alpha(filtercient),lastfiltervalue(0.0){}
        double filter(double input){
            double value=(1-alpha)*input+alpha*lastfiltervalue;
            lastfiltervalue=value;
            return value;
        }
    private:
        double alpha;
        double lastfiltervalue;
    
 };

static void P (int *x) {
 int i = 0;
*x = i++;
}

