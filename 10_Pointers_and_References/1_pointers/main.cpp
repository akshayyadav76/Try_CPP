#include<iostream>
#include<vector>

  //***************************Ponters******************************//

/*  A pointer is a variable that holds a memory address where a value lives.
 *  A pointer is declare useing the * operator before an identifier.
 * As C++ is a statically typed language,the type is required to declare a pointer 
 * 
 * Always initialize pointers
 * uninitialize pointers contain garbage value and can point any where
 * 
 * int *score_ptr {nullptr}  //means initialize with zero intreduce in C++11
 * initializing with keyword => nullptr (C++11) 
 */

using namespace std;
int main(){
    
    
    //normal
   int num {100};
   cout<<"\n value of num "<<num<<endl;
   cout<<" address of num "<<&num<<endl;
   cout<<" size of num "<<sizeof(num)<<endl;
   
   
   // pointer
   int *p;
   cout<<"\n value of p "<<p<<endl;           //garbage value 
   cout<<" address of p "<<&p<<endl;        // its own memory address
   cout<< " size of p "<<sizeof(p)<<endl;     //size of 4
    
      p=nullptr;    //  p =NULL;  <= it is also right 
    //p {nullptr};   that is wong 
    cout<<" \n initialize with nullptr "<<p<<endl;

    
    
    // we want 4 bytes to show any type of address
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long  *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};
    
    cout<<" \n size of p1 "<<sizeof(p1)<<endl;
     cout<<" size of p2 "<<sizeof(p2)<<endl;
      cout<<" size of p3 "<<sizeof(p3)<<endl;
       cout<<" size of p4 "<<sizeof(p4)<<endl;
        cout<<" size of p5 \n"<<sizeof(p5)<<endl;


   int score {20};
   double high_tem{100.5};
   
   int *score2 = &score;
   cout<<" value of  score "<<score<<endl;
   cout<<" address of score "<<&score<<endl;
   cout<<" value of score2 "<<score2<<endl;
   
  // score2 = high_tem; //compile error you cant assign double to int Pointer
  
     cout<<"\n *************************Dereference***********************\n"<<endl;
    //*************************Dereference****************//
    
/*usually we use pointer to store another address in it or access that address but if we want to access that address value 
 * then we use Dereferencing 
 * 
 * Access the data we are pointing to is called Dereferencing pointer for that we use Dereferenceing operator * 
 * 
 * */

int addres {200};
int *addres2 {&addres};

cout<<" vlaue of addres is "<<addres<<endl;
cout<<" address of addres is "<<&addres<<endl;
cout<<" value of addres2 is "<<addres2<<endl;
cout<<" accessing value of addres with adres2 "<<*addres2<<endl;

    cout << "\n------------------------------" << endl;
    double high_temp {100.7};
    double low_temp {37.4};			       
    double *temp_ptr {&high_temp};    

    cout << *temp_ptr << endl;   	// 100.7    	    
    temp_ptr = &low_temp;	
    cout << *temp_ptr << endl;   	// 37.4   	    

    cout << "\n------------------------------" << endl;

    string name {"Frank"};
    string *string_ptr {&name};

    cout << *string_ptr << endl;   	// Frank   
    name = "James"; 	    
    cout << *string_ptr << endl;   	// James  
//
    cout << "\n------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {nullptr};
    
    vector_ptr = &stooges;
    
    cout << "First stooge: " << (*vector_ptr).at(0) << endl;    // Larry
    
    cout << "Stooges: ";
    for (auto stooge: *vector_ptr)  
        cout << stooge << " ";
    cout << endl;
    
    cout << endl;



    return 0;
    
    }


