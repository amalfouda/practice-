//
//  employee.h
//  ass4
//
//  Created by Amal Fouda on 30/10/2022.
//

#ifndef employee_h
#define employee_h
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class employee
{
public:
    int age;
    string name;
    int salary;
    int experience;
    
    employee *next;
    
    employee() {
        name = "";
        age = 0;
        salary = 0;
        experience = 0;
    }
    
    employee(string n,int a,int s,int e) {
        name = n;
        age = a;
        salary = s;
        experience = e;
    }
    
    void clear() {
        name = "";
        age = 0;
        salary = 0;
        experience = 0;
    }
    
   
    
    void displayEmployee() {
        cout << setw(20) << name << setw(4) << age << setw(6) << salary << setw(4) << experience << endl;
    }


    
};


#endif /* employee_h */
