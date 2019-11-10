#include<iostream>
#include<string>

using namespace std;
class Second_year{
    
    protected :
    char second_grad {'b'};
    
public:
    int Cpp=50,toc=33;
    };

class Third_year: public Second_year{
    
    protected :
   string third_grad {"C++"};
    
public:
      int java=66,Ai=56;
    
    void show(){
    cout<< " second year result of mca :\n";
    cout<<"grad "<<second_grad<<endl;
    cout<<" C++ = "<<Cpp<<" toc = "<<toc<<endl<<endl;
    
    cout<< " Third year result of mca :\n";
    cout<<"grad "<<third_grad<<endl;
    cout<<" java = "<<java<<" Ai = "<<Ai<<endl;
    
    cout<<"total of grad ="<<"A"<<endl;
    cout<<"total result "<<Cpp+toc+java+Ai<<endl;
    
        }
    };

int main(){
    Third_year obj;
    obj.show();
   
    return 0;
    
    }
