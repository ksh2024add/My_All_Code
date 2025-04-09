#include <iostream>
#include <string>
using namespace std;

class Name{
    string first, last;
public:
    string get_first(){return first;}
    string get_last() {return last;}
    void set_name(string f, string l);
};

class PersonManager{
    Name *p;
    int nofp;
public:
    PersonManager(int n);

    void show();
    int serarch(string str);
    ~PersonManager();
};

void Name::set_name(string f, string l){
    first = f; last = l;
}

PersonManager::PersonManager(int n){
    
}

int main(){
    int n;
    cout << "Enter number of people." << endl;
    cin >> n;

    PersonManager people(n);

    people.show();

    cout << "Enter search name." << endl;
    string str;
    cin >> str;
    couut << people.serarch(str) << endl;

    return 0;
}