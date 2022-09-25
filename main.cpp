//
//  main.cpp
//  amal ass1
//
//  Created by Amal Fouda on 21/09/2022.
//

#include <iostream>
#include <string>
#include <queue>
#include "ca.h"
#include "Ra.h"
using namespace std;
int main() {
   
    queue<Car>myqueue;
    Car c1("private",120,2016,"BMW","ABC123");
    myqueue.push(c1);
    Car c2("bus",100,2011,"Toyota","XzE321");
    myqueue.push(c2);
    Car c3("truck",120,2020,"chevrolet","AMK252");
    myqueue.push(c3);
    Car c4("motorcycle",70,2020,"XXX","Ask432");
    myqueue.push(c4);
    Car c;
    Road A('A',100);

   
    int i=1;
    while (!myqueue.empty()) {
        c=myqueue.front();
        myqueue.pop();
        cout<<"the object number"<<i<<":";
        cout<<endl;
        if(A.Rader(c.getspeed())==true)
       {
        cout<<"("<<c.gettype()<<","<<c.getspeed()<<","<<c.getyear()<<","<<c.getbrand()<<","<<c.getplate()<<")"<<" "<<"will be fined.."<<endl;
          
     }
        A.allow(c.gettype());
        cout<<endl;
        cout<<"the age of the object:"<<A.age(c.getyear())<<endl;
        i++;
    }
   
    cout<<endl;
    double eff1=(float(A.geti())/Car::getcount())*100;
    cout<<"the effecieny of A:"<<eff1<<"%"<<endl;
    cout<<"--------------------------------------------"<<endl;
    Car c5("private",120,2016,"BMW","ABC123");
    myqueue.push(c5);
    Car c6("bus",80,2011,"Toyota","XzE321");
    myqueue.push(c6);
    Car c7("truck",120,2020,"chevrolet","AMK252");
    myqueue.push(c7);
    Road B('B',80);
    Car b;
  
    while (!myqueue.empty()) {
        b=myqueue.front();
        myqueue.pop();
        cout<<"the object number"<<i<<":";
        cout<<endl;
        if(B.Rader(b.getspeed())==true)
       {
        cout<<"("<<b.gettype()<<","<<b.getspeed()<<","<<b.getyear()<<","<<b.getbrand()<<","<<b.getplate()<<")"<<" "<<"will be fined.."<<endl;
          
     }
        B.allow(b.gettype());
        cout<<endl;
        cout<<"the age of the object:"<<B.age(b.getyear())<<endl;
        
        i++;
    }
    cout<<endl;
   
    int eff2=float(Car::getcount()/Car::getcount())*100;
    cout<<"the effecieny of B:"<<eff2<<"%"<<endl;
    cout<<"--------------------------------------------"<<endl;
    Road C('C',60);
    Car c8("bus",100,2011,"Toyota","XzE321");
    myqueue.push(c8);
    Car c9("truck",120,2020,"chevrolet","AMK252");
    myqueue.push(c9);
    Car c10("motorcycle",70,2020,"XXX","Ask432");
    myqueue.push(c10);
    Car e;
    while (!myqueue.empty()) {
        e=myqueue.front();
        myqueue.pop();
        cout<<"the object number"<<i<<":";
        cout<<endl;
        if(C.Rader(e.getspeed())==true)
       {
        cout<<"("<<e.gettype()<<","<<e.getspeed()<<","<<e.getyear()<<","<<e.getbrand()<<","<<e.getplate()<<")"<<" "<<"will be fined.."<<endl;
          
     }
        C.allow(e.gettype());
        cout<<endl;
        cout<<"the age of the object:"<<C.age(e.getyear())<<endl;
        i++;
    }
    int eff3=(float(C.getj())/Car::getcount())*100;
    cout<<"the effecieny of B:"<<eff3<<"%"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"number of passed objects:"<<A.geti()<<endl;
    cout<<"number of passed objects:"<<Car::getcount()<<endl;
    cout<<"number of passed objects:"<<C.getj()<<endl;
    cout<<"----------------------------------"<<endl;
    Car c11("car",100,2023,"BMW","Ab2wer42");
    myqueue.push(c11);
    Car r;
    r=myqueue.front();
    myqueue.pop();
    if(C.Rader(e.getspeed())==true)
   {
    cout<<"("<<r.gettype()<<","<<r.getspeed()<<","<<r.getyear()<<","<<r.getbrand()<<","<<r.getplate()<<")"<<" "<<"will be fined.."<<endl;
      
   }
    cout<<endl;
    Road d('D',100);
    cout<<endl;
    cout<<"the number:"<<Car::getcount()<<endl;

    return 0;
}
