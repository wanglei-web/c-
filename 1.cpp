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
 int main(){

     cout<<P[0]<<endl;

    double  filtercient=0.1;
    Filterclass filter1(filtercient);
    double originspeed =50.0;
    double filterspeed =filter1.filter(originspeed);
    cout<<"originspeed"<<originspeed<<"  "<<"filterspeed"<<filterspeed<<endl;
    return 1;
 }