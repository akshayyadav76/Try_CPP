#include<iostream>
#include<string>
#include<vector>

using namespace std;
class Player {
    
    //attributes
    string name {"parvez"};
    int health {200};
    int xp {3};
    
    //methodes
    void talk(string);
    bool is_dead();
    
    };
    
    class Account{
        // attributes
        string fullName;
        int balance;
        
        bool deposit(double);
        bool withdrow(double);
        
        };
    
    int main(){
        Account parvz_ac;
        Account hero_ac;
        
        Player parvez;
        Player hero;
        
        Player players [] {parvez,hero};
        
        Player *p {nullptr};
        p = new Player;
        delete p;
        
        return 0;
        }