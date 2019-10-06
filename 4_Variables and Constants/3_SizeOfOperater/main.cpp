#include<iostream>
#include<climits> //make sure you include climits for integer type
                          //Similer information for floating point number
                          // is containted in <cfloat>

using namespace std;
int main(){       
    
    cout << "size of information"<<endl;
    cout <<"=========================\n";
    
    cout<<"char: "<<sizeof(char)<<" bytes"<<endl;
    cout<<"int: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"unsigned int: "<<sizeof(unsigned int)<<" bytes"<<endl;
    cout<<"short: "<<sizeof(short)<<" bytes"<<endl;
    cout<<"long: "<<sizeof(long)<<" bytes"<<endl;
    cout<<"long long: "<<sizeof(long long)<<" bytes"<<endl;
   
     cout <<"=========================\n";
      cout<<"float: "<<sizeof(float)<<" bytes"<<endl;
      cout<<"double: "<<sizeof(double)<<" bytes"<<endl;
      cout<<"long double: "<<sizeof(long double)<<" bytes"<<endl;
      
      // use value derfine in climits
       cout <<"=========================\n";
       
       cout<<"minimum vlaues \n";
       cout<<"char: "<<CHAR_MIN<<endl;
       cout<<"int: "<<INT_MIN<<endl;
       cout<<"short: "<<SHRT_MIN<<endl;
       cout<<"long: "<<LONG_MIN<<endl;
       cout<<"long long: "<<LLONG_MIN<<endl;
      
       cout <<"=========================\n";
       
       cout<<"maximum vlaues \n";
       cout<<"char: "<<CHAR_MAX<<endl;
       cout<<"int: "<<INT_MAX<<endl;
       cout<<"short: "<<SHRT_MAX<<endl;
       cout<<"long: "<<LONG_MAX<<endl;
       cout<<"long long: "<<LLONG_MAX<<endl;
   
        cout <<"=========================\n";
        cout<<"size of with variables \n";
        int age{21};
        cout<<"age is "<<sizeof(age)<<endl;
        //or
        cout<<"age is "<<sizeof age<<endl; 
    return 0;
    
    }
