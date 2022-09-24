//
//  ca.h
//  amal ass1
//
//  Created by Amal Fouda on 21/09/2022.
//

#ifndef ca_h
#define ca_h
using namespace std;
#include <iostream>
class Car
{
    private://
    string Car_brand;
    string Car_type;
    string Car_plate;
    int speed;
    int Year_model;
    static int count; //static int count=0;
    public:
    Car()
    {
        Car_brand="";
        Car_type="";
        Car_plate="";
        speed=0;
        Year_model=0;

    }
    Car( string Car_t,int s,int Year_m,string Car_b, string Car_p)
    {
        
        while (Car_t!="bus" && Car_t!="private" && Car_t!="motorcycle" && Car_t!="truck")
        {
            cout<<"wrong input...enter again type!"<<endl;
            cin>>Car_t;//
        }
        Car_type=Car_t;
        speed=s;
        Year_model=Year_m;
        Car_brand=Car_b;
        while(Car_p.length()!= 6)
        {
            cout<<"wrong input...enter again plate!"<<endl;
            cin>>Car_p;
        }
        Car_plate=Car_p;
        count ++;
    }
    void setbrand(string b)
    
    {
        Car_brand=b;
       
    }
    void settype(string t)
    {
        while (t!="bus" && t!="private" && t!="motorcycle" && t!="truck")
        {
            cout<<"wrong input...enter again type !"<<endl;
            cin>>t;//
        }
        Car_type=t;
    }
    void setplate(string p )
    {
        Car_plate=p;
        while(Car_plate.length()!= 6)
        {
            cout<<"wrong input...enter again plate !"<<endl;
            cin>>Car_plate;
        }
    }
    void setspeed(int s)
    {
        speed=s;
    }
    void setyear(int y)
    {
        Year_model=y;
    }
    string getbrand()
    {
        return Car_brand;
    }
    string gettype()
    {
        return Car_type;
    }
    string getplate()
    {
        return Car_plate;
    }
    int getspeed()
    {
        return speed;
    }
    int getyear()
    {
        return Year_model;
    }
    static int getcount()
    {
        return count;
    }
};
int Car::count=0;


#endif /* ca_h */
