//
//  mechanic.h
//  ass2 cs2
//
//  Created by Amal Fouda on 03/10/2022.
//

#ifndef mechanic_h
#define mechanic_h
#include <iostream>
using namespace std;
class mechanics: public person
{
private:
    int count;
    Appointment *ap;
    
    
public:
   mechanics()
    {
       count=0;
       ap=new Appointment[20];
    }
          
   void setapp(int h,int m)
    {//this function to set value in array after is avalible return true by taking the values from getappointment in customer class
       ap[count].hours=h;
       ap[count].mins=m;
        count ++;
    }
    
    bool isavailable(int h, int m)
    {
        
        for(int i=0;i<count;i++)
        {
            if((ap[i].hours==h)&&(ap[i].mins==m))//this the function that will check if the mechanic is availble or not by taking the values using getappointment in the customer class
               return false;
        }
        return true;
    }
    void print_info()
    {
        cout<<"name:"<<getname()<<endl;
        cout<<"age :"<<getage()<<endl;
        cout<<"id:"<<get_id()<<endl;
    }
    
 ~mechanics()
    {
     delete []ap;
 }
  
};

#endif /* mechanic_h */
                                                                                                                                    
