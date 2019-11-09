#include<iostream>

using namespace std;

// with while loop
int main(){

    
    int i {0},first {0}, second{1}, times, next;
    
    cout<< "enter legnth of fibonacci \n";
    cin>>times;
    
    do{
        cout<<first <<" ";
        next=first+second;
        first=second;
        second=next;
        i++;
        }while(i<times);
    cout<<"\n";
    return 0;
        }
    
 
//
// Recursion - Fibonacci
//#include <iostream>
//
//using namespace std;
//
// Recursion - Fibonacci
//
//#include <iostream>
//
//using namespace std;
//unsigned long long fibonacci(unsigned long long n);
//
//unsigned long long fibonacci(unsigned long long n) {
//    if (n <= 1)
//        return n;	              base cases
//    return fibonacci(n-1) + fibonacci(n-2);  recursion
//}
//
//int main() {
//    cout << fibonacci(5) << endl;    5
//    cout << fibonacci(30) << endl;	 832040 
//    cout << fibonacci(40) << endl;  102334155
//    return 0;
//}
