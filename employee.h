#include <iostream>
using namespace std;
class employee
    {
    private:
    string name, department, position;
    int id;
   
    public:
    employee();
    employee(string n);   
    employee(string n, int i); 
    employee(string n, int i, string d);
    employee(string n, int i, string d, string p);
    void setname(string n);
    void setdepar(string d);
    void setposition(string p);
    void setid(int i);
    string getname();
    string getdepar();
    string getposition();
    int getid();
    };
