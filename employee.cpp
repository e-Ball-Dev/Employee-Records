#include "employee.h"
#include <iostream>
using namespace std;
    
    employee :: employee()
    {
        name = "no input";
        id = 0;
        department = "no input";
        position = "no input";
    }
    employee :: employee(string n)
    {
        name = n;
        id = 0;
        department = "no input";
        position = "no input";
    }
    employee :: employee(string n, int i)
    {
        name = n;
        id = i;
        department = "no input";
        position = "no input";
    }
    employee :: employee(string n, int i, string d)
    {
        name = n;
        id = i;
        department = d;
        position = "no input";
    }
    employee :: employee(string n, int i, string d, string p)
    {
        name = n;
        id = i;
        department = d;
        position = p;
    }    
    void employee :: setname(string n)
    {
        name = n;
    }
    void employee :: setdepar(string d)
    {
        department = d;
    }
    void employee :: setposition(string p)
    {
        position = p;
    }
    void employee :: setid(int i)
    {
        id = i;
    }
    string employee :: getname()
    {
        return name;
    }
    string employee :: getdepar()
    {
        return department;
    }
    string employee :: getposition()
    {
        return position;
    }
    int employee :: getid()
    {
        return id;
    }
