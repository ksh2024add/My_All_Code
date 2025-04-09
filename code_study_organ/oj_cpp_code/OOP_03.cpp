#include <iostream>
using namespace std;

class alu{
public:
    unsigned int r1;
    unsigned int r2;
    char oper;
    alu(){
        r1 = 1;
        r2 = 3;
        oper = '*';
    }

    unsigned int calc(){
        if(oper == '+') return r1+r2;
        else if(oper == '-') return r1-r2;
        else if(oper == '*') return r1*r2;
        else return 0;
    }
};

int main(){
    alu machine; 
    cout << machine.r1 << machine.oper << machine.r2 << endl;
    cin >> machine.r1 >> machine.oper >> machine.r2;    
    cout << machine.calc() << endl;                         
    cin >> machine.r1 >> machine.oper >> machine.r2;        
    cout << machine.calc() << endl;                         
    cin >> machine.r1 >> machine.oper >> machine.r2;      
    cout << machine.calc() << endl;      

    return 0;
}