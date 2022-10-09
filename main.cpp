//
//  main.cpp
//  ass2 cs2
//
//  Created by Amal Fouda on 30/09/2022.
//

#include <iostream>
#include "person.h"
#include "customer.h"
#include "mechanic.h"
#include <algorithm>
#include <queue>

int main() {
    queue<cutomers>myqueue1; 
    string x;
    int id,h,mi;
    double a;
    int size;
    cout<<"enter the size:";
    cin>>size;
    mechanics *m=new mechanics[3];
    cutomers *c=new cutomers[size];
    cutomers *p=new cutomers[size];
   cout<<"enter the info of mechanics"<<endl;
    for(int i=0;i<3;i++)
    {        cout<<"name:";
        cin>>x;
        m[i].setname(x);
        cout<<"age:";
       cin>>a;
       m[i].setage(a);
        cout<<"mechanic id:";
        cin>>id;
        m[i].setid(id);
    }
    cout<<"customer"<<endl;
     for(int i=0;i<size;i++)
    {
       cout<<"name:";
        cin>>x;
        c[i].setname(x);
        cout<<"age:";
        cin>>a;
        c[i].setage(a);
        cout<<"id :";
        cin>>id;
        c[i].setid(id);
        cout<<"time:";
        cin>>h>>mi;
        c[i].app.hours=h;
        c[i].app.mins=mi;
    }
    bool f1 = false;//i used 3 flags so it can help me to assign each customer with the right mechanic
    bool f2 = false;
    bool f3 = false;
    int count =0;
    for(int i=0;i<size;i++)
    {
        if (f3){
            f1 = false;
            f2 = false;
            f3 = false;
        }
        
            if(m[0].isavailable(c[i].getappointment().hours, c[i].getappointment().mins)==true && f1 == false)
            {
                m[0].setapp(c[i].getappointment().hours, c[i].getappointment().mins);
                c[i].setmechanical_id(m[0].get_id());
                c[i].setmechanical_name(m[0].getname());
                f1 = true;
                p[i]=c[i];
                count++;
               
            }
        else if (m[1].isavailable(c[i].getappointment().hours, c[i].getappointment().mins) && f2 == false)
        {
            m[1].setapp(c[i].getappointment().hours, c[i].getappointment().mins);
            c[i].setmechanical_id(m[1].get_id());
            c[i].setmechanical_name(m[1].getname());
            p[i]=c[i];
            f2 = true;
            count++;
        }
        else if(m[2].isavailable(c[i].getappointment().hours, c[i].getappointment().mins) && f3 == false)
        {
            m[2].setapp(c[i].getappointment().hours, c[i].getappointment().mins);
            c[i].setmechanical_id(m[2].get_id());
            c[i].setmechanical_name(m[2].getname());
            p[i]=c[i];
            f3 = true;
            count++;
            
        }
        else
        {
            cout<<"unavailable mechanics at that time"<<endl;
        }
       
    }
    
    
   
   for(int i=0;i<count;i++)
   {
        for(int j=i+1;j<count;j++)
        {
            if(p[i]>p[j])
                swap(p[i],p[j]);
        }
       myqueue1.push(p[i]);    }

   while(!myqueue1.empty())

    {
        cout<<myqueue1.front().getname()<<" with "<<myqueue1.front().getmechanical_name()<<" at "<<myqueue1.front().getappointment().hours<<":"<<myqueue1.front().getappointment().mins<<endl;
        myqueue1.pop();
    }
    cout<<"-------------------------------------------"<<endl;
    for(int i=0;i<count;i++)
    {
        p[i].print_info();
    }
    delete []m;
    delete []c;
    delete []p;

    return 0;
}

