#include<iostream>

using namespace std;
const double pi{1.2345};

// functions prototype
 double cir_area(double);  // double cir_area(double cir); no need to put variable name compiler just want to know its type 
 void circul();
 double volume_area(double radious, double height); //  but puting variable inside only usefull for documentation
 void volum();
 
    int main(){
    circul();
    volum();
    return 0;
    }
    
double cir_area(double cir){
    return pi*cir*cir;
    }

void circul(){
    cout<<" Enter a  number for Cyliender"<<endl;
    int circul;
    cin>>circul;
    cout<<" the circular of that number is "<<cir_area(circul)<<endl;
    }
    
       double volume_area(double radious, double height){
        return pi*radious*radious*height;
        }
        
    void volum(){
        double radius;
        double height;
        cout <<" enter radious \n";
        cin>>radius;
        cout<<" enter height \n";
        cin>>height;
        cout<<" this is the total radious and height "<<volume_area(radius,height)<<endl;
        
        }
    

    