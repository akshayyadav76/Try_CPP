#include<iostream>

using namespace std;
class Operatorload{
    
    public:
    int meter_length =5;
    int centmeter_length {500};
    
    void show(){
        cout<<meter_length<<" "<<centmeter_length<<endl;
        }
    Operatorload operator +(Operatorload obj){
        
        Operatorload inobj;
        inobj.meter_length=meter_length+obj.meter_length;
        inobj.centmeter_length=centmeter_length+obj.centmeter_length;
        
        return inobj;
        
        }
    };


int main(){
    
    Operatorload mainobj,obj1,obj2;
    mainobj = obj1+obj2;
    mainobj.show();
    return 0;
    
    }
