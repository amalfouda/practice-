//
//  Ra.h
//  amal ass1
//
//  Created by Amal Fouda on 21/09/2022.
//

#ifndef Ra_h
#define Ra_h
using namespace std;
#include <iostream>
class  Road
{
private:
    char Road_Type;
    int Speed_Limit;
    int i=0,j=0;

public:
   Road()
    {
       Road_Type=' ';
       Speed_Limit=0;
      
    }
    Road(char Road_T , int Speed_L)
    {
        Road_Type=Road_T;
        while (Road_Type!='A' && Road_Type!='B' && Road_Type!='C')
        {
            cout<<"wrong input...enter again road"<<endl;
            cin>>Road_Type;
            
        }
        Speed_Limit=Speed_L;//fi validation
    }
    
    void setroad(char R_t)
    {
        Road_Type=R_t;
        while (Road_Type!='A' && Road_Type!='B' && Road_Type!='C')
        {
            cout<<"wrong input...enter again road !"<<endl;
            cin>>Road_Type;
            
        }
    }
    void setspeed_l(int s)
    {
        Speed_Limit=s;//fi validation
    }
    char getroad()
    {
        return Road_Type;
    }
    int getspeed()
    {
        return Speed_Limit;
    }
    bool Rader(int speed)
    {
        bool flag=false;
        if (speed>Speed_Limit)
            flag=true;
        return flag;
        }
    void allow(string Car_type)
    {
       
        if((Road_Type=='A' && Car_type=="private")||(Road_Type=='A' && Car_type=="motorcycle"))
        {
            cout<<"allowed in A,";
            i++;
        }
        else
            cout<<"not allowed A,";
        
        
        if (Road_Type=='B' || Road_Type=='A' ||Road_Type=='C')
        {
            cout<<" "<<"allowed B,"<<" ";
            
        }

        if (Road_Type=='C' && Car_type=="truck")
        {
            cout<<" "<<"allowed C,"<<" ";
            j++;
                    }
        else
            cout<<" "<<"notallowed C,"<<" ";
        
    }
    int age(int Y_m)
    {
        return (2022-Y_m);
    }
   
    int geti()
    {
        return i;
    }
    int getj()
    {
        return j;
    }
};


#endif /* Ra_h */
