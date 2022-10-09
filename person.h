//
//  person.h
//  ass2 cs2
//
//  Created by Amal Fouda on 30/09/2022.
//

#ifndef person_h 
#define person_h
#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int id_1;
    double age;

    
public:
    person()
    {
        name="";
        id_1=0;
         age=0.0;
    }
        struct Appointment
    {
        int hours;
        int mins;
    } app;//i used app to define name for the struct so i can use it in main.
   
    void setname(string n)
    {
        name=n;
    }
    string getname()
    {
        return name;
    }
    void setid(int d)
    {
        id_1=d;
    }
    int get_id()
    {
        return id_1;
    }
    void setage(double a)
    {
        age=a;
    }
    double getage()
    {
        return age;
    }
   virtual void print_info()=0;
   
};

#endif /* person_h */
