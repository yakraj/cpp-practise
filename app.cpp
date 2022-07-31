#include <iostream>
#include <string>

using namespace std;


class Myfirst{
    public:
        string name;
        string cnf;
        int number;
};

class Access : public Myfirst {
};

int main(){
    Myfirst fObj;
    Access AObj;
    string name;
    string cnf;

    cout << "Please, enter your full name: ";
    getline(cin, fObj.name);
    cout << "Your name is " << name << " is that right" << endl;
    cout << "Please enter your response: ";
    getline(cin, fObj.cnf);
    (fObj.cnf == "yes") ? cout << "We gatche you" : cout << "seems like you made mistake in input" << endl;
    cout <<"Maybe it will work" << AObj.name + ": " << AObj.cnf;
    return 0;
}