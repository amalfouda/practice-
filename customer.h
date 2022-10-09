//
//  customer.h
//  ass2 cs2
//
//  Created by Amal Fouda on 01/10/2022.
//

#ifndef customer_h
#define customer_h

#include <iostream>

using namespace std;
class cutomers:public person
{
private:
    int mechanical_id;
    string mechanical_name;//i added this variable so i can assign the name of mechanic with the customer
public:
 cutomers()
    {
     mechanical_id=0;
    }
    cutomers (string n,int d,double a, int m_d )
    {
        setname(n);
        setid(d);
        setage(a);
        mechanical_id=m_d;
    }
    cutomers(int m_d)
    {
        mechanical_id=m_d;
    }
   void setmechanical_id(int m_d)
    {
       mechanical_id=m_d  ;
   }
    int getid()
    {
        return mechanical_id;
    }
    Appointment getappointment()
    {
        return app;
        //this function to help in returning the appointment that the customer entered in the array so i can use it in
        //mechanic class to assign these appointment in the struct array
    }
    void setmechanical_name(string n)
    {
        mechanical_name=n;//i used this function to take the name from mechanic and assign it in this function
    }
    
    string getmechanical_name()
    {
        return mechanical_name;
    }
    
    bool operator==(cutomers &c)
    {
        if ((getappointment().hours==c.getappointment().hours) &&( getappointment().mins==c.getappointment().mins)) {
            return true;
        }
        return false;
    }
    bool operator >(cutomers &c)
    {
        if((getappointment().hours>c.getappointment().hours)||( getappointment().mins>c.getappointment().mins))
            return true;
        return false;
        
    }
         
  
    bool operator<(cutomers &c)
    {
        if((getappointment().hours<c.getappointment().hours)||( getappointment().mins<c.getappointment().mins))
            return true;
        return false;    }

    void print_info()
    {
        cout<<getname()<<" with "<<getmechanical_name()<<" with id "<<getid()<< " at "<<getappointment().hours<<":"<<getappointment().mins<<endl;
    }
   
};

#endif /* customer_h */
